#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
    while(true) {
        cout << ">>";
        getline(cin, text, '\n');
        if(text.find("exit") != -1) {
            break;
        }
        for(int i=text.size()-1; i >= 0;i--) {
            cout << text[i];
        }
        cout << endl;
    }
}