#include <iostream>
using namespace std;

int main(){
    cout<<"�̸���? ";
    char name[10];
    cin.getline(name,10,'\n');

    cout<<"�ּҴ�? ";
    char add[100];
    cin.getline(add,100,'\n');

    cout<<"���̴�? ";
    int age;
    cin>>age;

    cout<<name<<", "<<add<<", "<<age<<"��"<<endl;
    return 0;
}
