#include <iostream>
#include <string>
using namespace std;

class Integer{
    int number;
public:
    Integer(int a);
    Integer(string b);
    int get();
    int isEven();
    void set(int c);
};

Integer::Integer(int a){
    number = a;
}
Integer::Integer(string b){
    number = stoi(b);
}
int Integer::get() {
    return number;
}
int Integer::isEven(){
    if ((number % 2) == 0){
        return 1;
    }else{
        return 0;
    }
}
void Integer::set(int c){
    number = c;
}

int main(){
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}