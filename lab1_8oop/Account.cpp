//Account.cpp

#include <iostream>
#include <string>
#include <sstream>
#include "Account.h"

using namespace std;


bool Account::Money::Init(int newam500, int newam200, int newam100, int newam50, int newam20, int newam10, int newam5, int newam2, int newam1, int newam050, int newam025, int newam010, int newam005, int newam002, int newam001) {
    if (newam500 < 0 || newam200 < 0 || newam100 < 0 || newam50 < 0 || newam20 < 0 || newam10 < 0 || newam5 < 0 || newam2 < 0 || newam1 < 0 || newam050 < 0 || newam025 < 0 || newam010 < 0 || newam005 < 0 || newam002 < 0 || newam001 < 0)
        return false;

    am500 = newam500;
    am200 = newam200;
    am100 = newam100;
    am50 = newam50;
    am20 = newam20;
    am10 = newam10;
    am5 = newam5;
    am2 = newam2;
    am1 = newam1;
    am050 = newam050;
    am025 = newam025;
    am010 = newam010;
    am005 = newam005;
    am002 = newam002;
    am001 = newam001;
    return true;
}

double Account::Money::Sum() {
    return 500 * am500 + 200 * am200 + 100 * am100 + 50 * am50 + 20 * am20 + 10 * am10 + 5 * am5 + 2 * am2 + am1 + 0.5 * am050 + 0.25 * am025 + 0.1 * am010 + 0.05 * am005 + 0.02 * am002 + 0.01 * am001;
}

Account::Money doubleMoney(double value)
{
    Account::Money a;

    a.SetAm500((int)value / 500);
    value -= (int)value / 500 > 0 ? 500 * (int)(value / 500) : 0;

    a.SetAm200((int)value / 200);
    value -= (int)value / 200 > 0 ? 200 * (int)(value / 200) : 0;

    a.SetAm100((int)value / 100);
    value -= (int)value / 100 > 0 ? 100 * (int)(value / 100) : 0;

    a.SetAm50((int)value / 50);
    value -= (int)value / 50 > 0 ? 50 * (int)(value / 50) : 0;

    a.SetAm20((int)value / 20);
    value -= (int)value / 20 > 0 ? 20 * (int)(value / 20) : 0;

    a.SetAm10((int)value / 10);
    value -= (int)value / 10 > 0 ? 10 * (int)(value / 10) : 0;

    a.SetAm5((int)value / 5);
    value -= (int)value / 5 > 0 ? 5 * (int)(value / 5) : 0;

    a.SetAm2((int)value / 2);
    value -= (int)value / 2 > 0 ? 2 * (int)(value / 2) : 0;

    a.SetAm1((int)value / 1);
    value -= (int)value / 1 > 0 ? 1 * (int)(value / 1) : 0;

    value *= 100;

    a.SetAm050((int)value / 50);
    value -= (int)value / 50 > 0 ? 50 * (int)(value / 50) : 0;

    a.SetAm025((int)value / 25);
    value -= (int)value / 25 > 0 ? 25 * (int)(value / 25) : 0;

    a.SetAm010((int)value / 10);
    value -= (int)value / 10 > 0 ? 10 * (int)(value / 10) : 0;

    a.SetAm005((int)value / 5);
    value -= (int)value / 5 > 0 ? 5 * (int)(value / 5) : 0;

    a.SetAm002((int)value / 2);
    value -= (int)value / 2 > 0 ? 2 * (int)(value / 2) : 0;

    a.SetAm001((int)value / 1);
    value -= (int)value / 1 > 0 ? 1 * (int)(value / 1) : 0;

    return a;
}

Account::Money SumSum(Account::Money a, Account::Money b)
{
    double mult = a.Sum() + b.Sum();
    Account::Money c = doubleMoney(mult);
    return c;
}

Account::Money DiffSum(Account::Money a, Account::Money b) {
    double mult = a.Sum() - b.Sum();
    Account::Money c = doubleMoney(mult);
    return c;
}

/*double ProdSum(Account::Money a, Account::Money b)
{
    return a.Sum() * b.Sum();
}*/

double DivSum(Account::Money a, Account::Money b)
{
    return a.Sum() / b.Sum();
}

Account::Money MultOnNum(Account::Money a, double value) {
    double mult = a.Sum() * value;
    Account::Money b = doubleMoney(mult);
    return b;
}

Account::Money DivOnNum(Account::Money a, double value) {
    double mult = a.Sum() / value;
    Account::Money b = doubleMoney(mult);
    return b;
}

bool Less(Account::Money a, Account::Money b) {
    return a.Sum() < b.Sum();
}

bool Greater(Account::Money a, Account::Money b) {
    return a.Sum() > b.Sum();
}

bool Equal(Account::Money a, Account::Money b) {
    return a.Sum() == b.Sum();
}

bool NotEqual(Account::Money a, Account::Money b) {
    return !(Equal(a, b));
}

string Account::Money::toString() {
    stringstream sout;
    sout << Sum();
    return sout.str();
}

void Account::Money::Read() {
    cout << "500"; cin >> am500;
    cout << "200"; cin >> am200;
    cout << "100"; cin >> am100;
    cout << "50"; cin >> am50;
    cout << "20"; cin >> am20;
    cout << "10"; cin >> am10;
    cout << "5"; cin >> am5;
    cout << "2"; cin >> am2;
    cout << "1"; cin >> am1;
    cout << "0,50"; cin >> am050;
    cout << "0,25"; cin >> am025;
    cout << "0,10"; cin >> am010;
    cout << "0,05"; cin >> am005;
    cout << "0,02"; cin >> am002;
    cout << "0,01"; cin >> am001;
}

void Account::Money::Display() {
    cout << toString() << endl;
}

void Account::Init(string name1, int num1, double perc1, Money sum1) {
    name = name1;
    num = num1;
    perc = perc1;
    sum = sum1;
}

void Account::Read() {
    cout << "name = "; cin >> name;
    cout << "number = "; cin >> num;
    cout << "percent = "; cin >> perc;
    sum.Read();
}

void Account::Display() {
    cout << name << endl;
    cout << num << endl;
    cout << perc << endl;
    cout << sum.toString() << endl;
}

void Account::Withdraw(Money value) {
    sum = DiffSum(sum, value);
}

void Account::TopUp(Money value) {
    sum = SumSum(sum, value);
}

void Account::Interest() {
    sum = MultOnNum(sum, 0.01 * perc);
}

void Account::Dollar() {
    sum = DivOnNum(sum, 32);
}

void Account::Euro() {
    sum = DivOnNum(sum, 35);
}

string Account::toString() {
    string d;
    stringstream sout;
    sout << sum.toString() << endl;
    d = sout.str();
    d.replace(d.find("."), 1, ",");
    return d;
}