#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int count = 0;
    int s = 0;
    cout << "문자열 입력>>";
    getline(cin, inputString, '\n');

    while(true){
        s = inputString.find('a', s);
        if (s != -1){
            count += 1;
            s++;
        }else{
            break;
        }
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;
}