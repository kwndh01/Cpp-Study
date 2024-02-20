#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom{
    int selectable;
public:
    SelectableRandom(int selectable);
    int next();
    int nextInRange(int a, int b);
};
SelectableRandom::SelectableRandom(int selectable){
    srand((unsigned)time(0));
    this->selectable = selectable;
}
int SelectableRandom::next(){
    int n = rand();
    if(n%2 == selectable){
        n-= 1;
    }
    return n;
}
int SelectableRandom::nextInRange(int a, int b){
    int n = rand() % b;
    if (n <= a){
        n += a;
    }
    if (n%2 == selectable){
        n-=1;
    }
    return n;
}

int main(){


    int selectable;
    cout<<" 홀수:0, 짝수:1>>";
    cin>>selectable;
    SelectableRandom r(selectable);
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for (int i=0; i<10; i++){
        int n = r.next();
        cout << n << ' ';
    }
    cout <<endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10 개--" << endl;
    for (int i=0; i<10; i++){
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}