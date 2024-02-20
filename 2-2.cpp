#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=9; i++)
    {
        for (int j=1; j<=9; j++)
        {
            int value = i * j;
            cout<<i<<"X"<<j<<"="<<value<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
