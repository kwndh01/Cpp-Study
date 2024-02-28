#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
    int slot1, slot2, slot3;
    string name;
public:
    void run();
    void setName(string name);
    string printName();
};
void Player::setName(string name) {
    this->name = name;
}
string Player::printName() {
    return name;
}
void Player::run() {
    int n1=rand() % 3;
    int n2=rand() % 3;
    int n3=rand() % 3;
    cout << n1 << "\t" << n2 << "\t" << n3;
    if (n1 == n2 == n3){
        cout << name << "님 승리!!" << endl;

    }else{
        cout << "아쉽군요!" << endl;
    }
}

class GamblingGame {
    string name;
    Player p1;
    Player p2;
    char enterKey;
public:
    GamblingGame();
    void start();
};
GamblingGame::GamblingGame() {
    srand((unsigned)time(0));
    cout << "첫번째 선수 이름>>";
    cin >> name;
    p1.setName(name);
    cout << "두번째 선수 이름>>";
    cin >> name;
    p2.setName(name);

    while(1) {
        cout << p1.printName() << ":";
        while(1) {
            cin >> enterKey;
            if(enterKey == '\n') {
                break;
            }
        }
        p1.run();

        while(1) {
            cin >> enterKey;
            if(enterKey == '\n') {
                break;
            }
        }
        p2.run();
    }
}

