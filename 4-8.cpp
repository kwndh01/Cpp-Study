#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};
void Circle::setRadius(int radius) {
    this->radius = radius;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    int num, temp, count = 0;
    cout << "���� ���� >>";
    cin >> num;
    Circle *p = new Circle[num];
    for(int i=0; i<num; i++) {
        cout << "�� " << i+1 <<"�� ������ >>";
        cin >> temp;
        p[i].setRadius(temp);
        if(p[i].getArea() > 100) {
            count++;
        }
    }
    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" <<endl;
}