#include <iostream>
using namespace std;

class Circle {
    int radius;
    string name;
public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

void Circle::setCircle(string name, int radius) {
    this->name = name;
    this->radius = radius;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

string Circle::getName() {
    return name;
}

class CircleManager {
    Circle *p;
    int size;
public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName();
    void searchByArea();
};

CircleManager::CircleManager(int size) {
    this->size = size;
    p = new Circle[size];
    for(int i=0; i<size; i++) {
        string name;
        int radius;
        cout << "�� " << i+1 << "�� �̸��� ������ >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }
}

CircleManager::~CircleManager() {
    delete [] p;
}

void CircleManager::searchByName() {
    string name;
    cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
    cin >> name;
    for(int i=0; i<size; i++) {
        if(p[i].getName() == name) {
            cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    double minimum;
    cout << "�ּ� ������ �Է��ϼ��� >> ";
    cin >> minimum;
    cout << minimum << "���� ū ���� �˻��մϴ�." <<endl;
    for(int i=0; i<size; i++) {
        if(p[i].getArea() > minimum) {
            cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
        }
    }
    cout << endl;
}

int main() {
    int count;
    cout << "���� ���� >> ";
    cin >> count;
    CircleManager Cir(count);
    Cir.searchByName();
    Cir.searchByArea();
    return 0;
}
