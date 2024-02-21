#include <iostream>
using namespace std;

int main(){
    int *arr = new int[5];
    cout << "정수 5개 입력>>";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    float *meanValue = new float;
    *meanValue = 0;

    for (int i=0; i<5; i++){
        *meanValue += arr[i];
    }
    *meanValue = *meanValue / 5;
    cout << "평균 " << *meanValue << endl;
    delete [] arr;
    delete meanValue;

    return 0;
}