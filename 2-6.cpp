#include <iostream>
using namespace std;

int main()
{
    cout<<"�� ��ȣ�� �Է��ϼ���>>";
    string password;
    cin>>password;
    cout<<"�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
    string PW2;
    cin>>PW2;
    if(PW2.compare(password) == 0)
    {
        cout<<"�����ϴ�"<<endl;
    }
    else
    {
        cout<<"�ٸ��ϴ�"<<endl;
    }
    return 0;
}