#include <iostream>
using namespace std;

int main()
{
    cout<<"���ڵ��� �Է��϶� (100�� �̸�).";
    char buf[100];
    cin.getline(buf,100,'\n');
    int find = 0;

    for (int i=0; i<100; i++)
    {
        if(buf[i] == 'x')
        {
            find += 1;
        }
    }
    cout<<find<<endl;
    return 0;
}