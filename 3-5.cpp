#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
    Random();
    int next();
    int nextInRange(int a, int b);
};
Random::Random(){
    srand((unsigned)time(0));
}
Random::next(){
    int n = rand();
    return n;
}
Random::nextInRange(int a, int b){
    int n = rand() % b;
    if (n <= a){
        n += a;
    }
    return n;
}

int main(){

    Random r;
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