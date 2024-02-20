#include <iostream>
using namespace std;

int main(){
    cout<<"이름은? ";
    char name[10];
    cin.getline(name,10,'\n');

    cout<<"주소는? ";
    char add[100];
    cin.getline(add,100,'\n');

    cout<<"나이는? ";
    int age;
    cin>>age;

    cout<<name<<", "<<add<<", "<<age<<"세"<<endl;
    return 0;
}
