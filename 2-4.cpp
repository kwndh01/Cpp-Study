#include <iostream>
using namespace std;

int main()
{
    cout<<"5 ���� �Ǽ��� �Է��϶�>>";
    float value [5];
    for(int i=0; i<5; i++)
    {
        cin>>value[i];
    }
    float biggest = value[0];

    for (int i=1; i<5; i++)
    {
        if(biggest < value[i])
        {
            biggest = value[i];
        }
    }
    cout<<"���� ū �� ="<<biggest<<endl;
    return 0;
}
