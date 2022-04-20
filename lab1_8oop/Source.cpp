//Source.cpp

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Account a;
    Account::Money b;
    b.Init(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2);
    a.Init("John", 0101, 1.5, b);
    a.Display();
    cout << a.toString();


    return 0;
}