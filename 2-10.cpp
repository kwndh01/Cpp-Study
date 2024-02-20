#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout<<"문자열 입력>>";
    char str[100];
    cin.getline(str,100,'\n');
    for (int i=0; i<strlen(str);i++){
        for (int j = 0; j<=i; j++){
            cout<<str[j];
        }
        cout<<"\n";
    }
    return 0;
}