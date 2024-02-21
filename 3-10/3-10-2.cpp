#include <iostream>
#include <string>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

int main(){
    int input1, input2;
    string oper;
    while (true){
        cout << "Á¤¼ö>>";
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