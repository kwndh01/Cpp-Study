#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int count = 0;
    cout << "���ڿ� �Է�>>";
    getline(cin, inputString, '\n');

    for (int i=0; i<inputString.size(); i++){
        if(inputString.at(i) == 'a'){
            count += 1;
        }
    }
    cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}