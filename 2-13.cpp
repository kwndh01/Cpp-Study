#include <iostream>
using namespace std;

int main(){
    cout<<"***** 승리장에 오신 것을 환영합니다. *****"<<endl;

    int menuSelect;
    int portion;
    string menu;

    while (1){
        cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
        cin>>menuSelect;
        if (menuSelect == 1){
            menu = "짬뽕";
        }else if(menuSelect == 2){
            menu = "짜장";
        }else if(menuSelect == 3){
            menu = "군만두";
        }else if(menuSelect == 4){
            cout<<"오늘 영업은 끝났습니다."<<endl;
            break;
        }else{
            cout<<"다시 주문하세요!!"<<endl;
            continue;
        }
        cout<<"몇인분?";
        cin>>portion;
        cout<<menu<<" "<<portion<<"인분 나왔습니다"<<endl;
    }
    return 0;

}