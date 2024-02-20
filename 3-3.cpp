#include <iostream>
#include <cstring>
using namespace std;

class Account {
    string name;
    int id;
    int balance = 0;
public:
    Account(string a, int b, int c);
    void deposit(int a);
    string getOwner();
    int withdraw(int a);
    int inquiry();
};

Account::Account(string a, int b, int c) {
    name = a;
    id = b;
    balance = c;
}

void Account::deposit(int a) {
    balance += a;
}

string Account::getOwner() {
    return name;
}

int Account::withdraw(int a) {
    balance -= a;
    return a;
}

int Account::inquiry() {
    return balance;
}

int main() {
    Account a("Kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
