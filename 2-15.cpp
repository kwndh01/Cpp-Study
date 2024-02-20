#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int variableA = 0;
    int variableB = 0;
    char oper[2];
    int result = 0;
    cout << "?";
    cin >> variableA >> oper >> variableB;
    
    if (strcmp(oper, "+") == 0){
        result = variableA + variableB;
    }else if (strcmp(oper, "-") == 0){
        result = variableA - variableB;
    }else if (strcmp(oper, "*") == 0){
        result = variableA * variableB;
    }else if (strcmp(oper, "/") == 0){
        if (variableB == 0) {
            cout << "Can't divide using Zero" << endl;
            return 0;
        } else {
            result = variableA / variableB;
        }
    }else
    if (variableB == 0) {
        cout << "Can't divide using zero" << endl;
        return 0;
    } else {
        result = variableA % variableB;
    }
    cout<<variableA<<oper<<variableB<<"="<<result<<endl;
    return 0;
}