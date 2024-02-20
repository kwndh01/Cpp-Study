#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom{
public:
    EvenRandom();
    int next();
    int nextInRange(int a, int b);
};
EvenRandom::EvenRandom(){
    srand((unsigned)time(0));
}
int EvenRandom::next(){
    int n = rand();
    if(n%2 == 1){
        n-= 1;
    }
    return n;
}
int EvenRandom::nextInRange(int a, int b){
    int n = rand() % b;
    if (n <= a){
        n += a;
    }
    if (n%2 == 1){
        n-=1;
    }
    return n;
}

int main(){

    EvenRandom r;
    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
    for (int i=0; i<10; i++){
        int n = r.next();
        cout << n << ' ';
    }
    cout <<endl << endl << "--2���� " << "4 ������ ���� ���� 10 ��--" << endl;
    for (int i=0; i<10; i++){
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}