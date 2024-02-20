#include <iostream>
using namespace std;

int main()
{
    cout<<"두 수를 입력하라>>";
    int value1, value2;
    cin>>value1>>value2;
    cout<<"큰 수 = ";
    if (value1>=value2)
    {
        cout<<value1<<endl;
    }
    else
    {
        cout<<value2<<endl;
    }
    return 0;
}
