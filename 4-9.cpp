#include <iostream>
using namespace std;

class Person {
    string name;
    string tel;
public:
    Person();
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};
Person::Person(){

}

void Person::set(string name, string tel) {
    this->name = name;
    this->tel = tel;
}

int main() {
    cout << "이름과 전화 번호를 입력해 주세요" << endl;
    Person p[3];
    string tel, name;
    for(int i=0; i<3; i++) {
        cout << "사람 " << i+1 << ">>";
        cin >> name >> tel;
        p[i].set(name, tel);
    }
    cout << "모든 사람의 이름은 ";
    for(int i=0; i<3; i++) {
        cout << p[i].getName() << ' ';
    }
    cout << endl;
    cout << "전화번호를 검색합니다. 이름을 입력하세요>>";
    string temp;
    cin >> temp;

    for(int i=0; i<3; i++) {
        if(temp.find(p[i].getName()) != -1) {
            cout << "전화 번호는 " << p[i].getTel() << endl;
        }
    }
}