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
    cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
    Person p[3];
    string tel, name;
    for(int i=0; i<3; i++) {
        cout << "��� " << i+1 << ">>";
        cin >> name >> tel;
        p[i].set(name, tel);
    }
    cout << "��� ����� �̸��� ";
    for(int i=0; i<3; i++) {
        cout << p[i].getName() << ' ';
    }
    cout << endl;
    cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
    string temp;
    cin >> temp;

    for(int i=0; i<3; i++) {
        if(temp.find(p[i].getName()) != -1) {
            cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
        }
    }
}