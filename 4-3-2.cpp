#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int count = 0;
    int s = 0;
    cout << "���ڿ� �Է�>>";
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
    cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}