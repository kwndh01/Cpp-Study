#include <iostream>
#include <string>
using namespace std;

class Histogram {
    string str;
    int arr[26] = {0};
public:
    Histogram(string init);
    void put(string s);
    void putc(char c);
    void print();
};
Histogram::Histogram(string init) {
    str = init;
}
void Histogram::put(string s) {
    str = str + s;
}
void Histogram::putc(char c) {
    str.push_back(c);
}
void Histogram::print() {
    for (int i=0; i<str.length(); i++) {
        if (isalpha(str.at(i))) {
            arr[tolower(str.at(i))-97] += 1; // 소문자로 변환하여 알파벳 배열에 추가
        }
    }
    for (int i=0; i<26; i++) {
        cout << static_cast<char>('a'+i) << " (" << arr[i] << ")\t: ";
        for (int j=0; j<arr[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    Histogram elvisHisto("Wise man say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}