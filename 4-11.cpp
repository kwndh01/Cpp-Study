#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill();
    void consume();
    int getSize();
};
void Container::fill() {
    size = 10;
}
void Container::consume() {
    size -= 1;
}
int Container::getSize() {
    return size;
}

class CoffeeVendingMachine {
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffe();
    void show();
public:
    void run();
};
void CoffeeVendingMachine::run(){
    while(true) {
        int menuSelect;
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
        cin >> menuSelect;
        if(menuSelect == 1) {
            selectEspresso();
        } else if(menuSelect == 2) {
            selectAmericano();
        } else if(menuSelect == 3) {
            selectSugarCoffe();
        } else if(menuSelect == 4) {
            show();
        } else {
            fill();
        }
    }
}
void CoffeeVendingMachine::fill() {
    for(int i=0; i<3; i++) {
        tong[i].fill();
    }
}
void CoffeeVendingMachine::selectAmericano() {
    if(tong[0].getSize() >= 1) {
        if(tong[1].getSize() >= 2) {
            tong[0].consume();
            tong[1].consume();
            tong[1].consume();
            return;
        }
    }
    cout << "원료가 부족합니다" <<endl;
}
void CoffeeVendingMachine::selectEspresso() {
    if(tong[0].getSize() >= 1) {
        if(tong[1].getSize() >= 1) {
            tong[0].consume();
            tong[1].consume();
            return;
        }
    }
    cout << "원료가 부족합니다" <<endl;

}
void CoffeeVendingMachine::selectSugarCoffe() {
    if(tong[0].getSize() >= 1) {
        if(tong[1].getSize() >= 2) {
            if(tong[2].getSize() >= 1) {
                tong[0].consume();
                tong[1].consume();
                tong[1].consume();
                tong[2].consume();
                return;
            }
        }
    }
    cout << "원료가 부족합니다" <<endl;
}
void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕" << tong[2].getSize() << endl;
}

int main() {
    cout << "***** 커피자판기를 작동합니다. ****" << endl;
    CoffeeVendingMachine machine;
    machine.run();
}
