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
    cout << "원의 개수 >>";
    cin >> num;
    Circle *p = new Circle[num];
    for(int i=0; i<num; i++) {
        cout << "원 " << i+1 <<"의 반지름 >>";
        cin >> temp;
        p[i].setRadius(temp);
        if(p[i].getArea() > 100) {
            count++;
        }
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다" <<endl;
}