#include <iostream>
using namespace std;

int main(){
    cout<<"***** �¸��忡 ���� ���� ȯ���մϴ�. *****"<<endl;

    int menuSelect;
    int portion;
    string menu;

    while (1){
        cout<<"«��:1, ¥��:2, ������:3, ����:4>>";
        cin>>menuSelect;
        if (menuSelect == 1){
            menu = "«��";
        }else if(menuSelect == 2){
            menu = "¥��";
        }else if(menuSelect == 3){
            menu = "������";
        }else if(menuSelect == 4){
            cout<<"���� ������ �������ϴ�."<<endl;
            break;
        }else{
            cout<<"�ٽ� �ֹ��ϼ���!!"<<endl;
            continue;
        }
        cout<<"���κ�?";
        cin>>portion;
        cout<<menu<<" "<<portion<<"�κ� ���Խ��ϴ�"<<endl;
    }
    return 0;

}