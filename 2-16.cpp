#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    cout<<"Histogram Generator"<<endl;
    char Sentence[10000];
    cin.getline(Sentence, 10000, ';');
    int Histogram[26] = {0};
    int alphabet = 0;
    //소문자 전체 변경
    for(int i=0; i<strlen(Sentence); i++){
        if (isalpha(Sentence[i])) {
            Sentence[i] = tolower(Sentence[i]);
            alphabet += 1;
        }
    }
    //알파벳 검색
    for(int i=0; i<strlen(Sentence); i++){
        if (isalpha(Sentence[i])) {
            int index = Sentence[i] - 'a';
            Histogram[index] += 1;
        }
    }
    cout<<"총 알파벳 수 "<<alphabet<<endl;
    for (int i=0; i<26; i++){
        cout<<(char)('a' + i)<<"("<<Histogram[i]<<")\t";
        for (int j=1; j<=Histogram[i]; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
