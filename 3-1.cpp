#include <iostream>
using namespace std;

class tower{
    int height = 1;
public:
    tower();
    tower(int a);
    getHeight();
};

tower::tower(){
}

tower::tower(int a){
    height = a;
}
tower::getHeight(){
    return height;
}
int main(){
    tower myTower;
    tower seoulTower(100);
    cout<<"높이는 "<< myTower.getHeight()<<"미터"<<endl;
    cout<<"높이는 "<< seoulTower.getHeight()<<"미터"<<endl;
}