#include <iostream>
using namespace std;

int main()
{
    cout<<"새 암호를 입력하세요>>";
    string password;
    cin>>password;
    cout<<"새 암호를 다시 한 번 입력하세요>>";
    string PW2;
    cin>>PW2;
    if(PW2.compare(password) == 0)
    {
        cout<<"같습니다"<<endl;
    }
    else
    {
        cout<<"다릅니다"<<endl;
    }
    return 0;
}