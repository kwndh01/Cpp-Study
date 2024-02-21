#include <iostream>
#include <string>
using namespace std;

class Add{
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Add::setValue(int x, int y){
    a = x;
    b = y;
}
int Add::calculate(){
    return a+b;
}

class Sub{
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Sub::setValue(int x, int y){
    a = x;
    b = y;
}
int Sub::calculate(){
    return a-b;
}

class Mul{
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Mul::setValue(int x, int y){
    a = x;
    b = y;
}
int Mul::calculate(){
    return a*b;
}

class Div{
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Div::setValue(int x, int y){
    a = x;
    b = y;
}
int Div::calculate(){
    return a/b;
}

int main(){
    int input1, input2;
    string oper;
    while (true){
        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> input1 >> input2 >> oper;
        if(oper.compare("+") == 0){
            Add Result;
            Result.setValue(input1, input2);
            cout << Result.calculate() << endl;
        }else if(oper.compare("-") == 0){
            Sub Result;
            Result.setValue(input1, input2);
            cout << Result.calculate() << endl;
        }else if(oper.compare("*") == 0){
            Mul Result;
            Result.setValue(input1, input2);
            cout << Result.calculate() << endl;
        }else if(oper.compare("/") == 0){
            Div Result;
            Result.setValue(input1, input2);
            cout << Result.calculate() << endl;
        }
    }

}