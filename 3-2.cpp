#include <iostream>
using namespace std;

class Date{
    int month;
    int day;
    int year;
    string etc;
public:
    Date(int a, int b, int c);
    Date(string str);
    getYear();
    getMonth();
    getDay();
    show();
};
Date::Date(int a, int b, int c){
    year = a;
    month = b;
    day  = c;
}
Date::Date(string str){
    etc = str;
}
Date::getYear(){
    return year;
}
Date::getMonth(){
    return month;
}
Date::getDay(){
    return day;
}
Date::show(){
    cout << etc << endl;
    return 0;
}

int main(){
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;
}