#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person() { }
    Person(string name) { this->name = name; }
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class Family {
    Person *p;
    int size;
    string name;
public:
    Family(string name, int size);
    void show();
    ~Family();
    void setName(int i, string name);
};
Family::Family(string name, int size) {
    p = new Person[size];
    this->name = name;
    this->size = size;

}
void Family::setName(int i, string name) {
    p[i].setName(name);
}
Family::~Family() {
    delete [] p;
}
void Family::show() {
    cout << name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
    for(int i=0; i<size; i++) {
        cout << p[i].getName() << ' ';
    }
    cout << endl;
}

int main() {
    Family *simpson = new Family("Simpson", 3);
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}