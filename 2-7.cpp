#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout<<"5 ���� �̸��� ';'�� �����Ͽ� �Է��ϼ���\n>>";
    int length[5] = {'0'};
    char name[5][100];
    for(int i=0; i<5; i++){
        cin.getline(name[i],100, ';');
        length[i] = strlen(name[i]);
        cout<<i+1<<" : "<<name[i]<<endl;
    }
    int big = length[0];
    int location = 0;
    for(int i=1; i<5; i++){
        if (big < length[i]){
            big = length[i];
            location = i;
        }
    }
    cout<<"���� �� �̸��� "<<name[location]<<endl;
    return 0;

}