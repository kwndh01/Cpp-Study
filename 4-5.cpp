#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
    srand((unsigned)time(0));
    int n;
    string text;
    while(true) {
      n = rand();
      getline(cin, text, '\n');
      if(text.find("exit") != -1){
          break;
      }
      n = n%text.size();
      int n2 = n%26;
      text.replace(n, 1, 1, 'a' + n2);
      cout << text << endl;
    }
}