#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int count = 0;
    cout << "문자열 입력>>";
    getline(cin, inputString, '\n');

    for (int i=0; i<inputString.size(); i++){
        if(inputString.at(i) == 'a'){
            count += 1;
        }
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;
}