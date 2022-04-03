//Account.h

#pragma once
#include <string>
using namespace std;

class Account {

private:
    string name;
    int num;
    double perc;
    double sum;
    friend class Money;

public:

    class Money {
    private:
        double am500, am200, am100, am50, am20, am10, am5, am2, am1, am050, am025, am010, am005, am002, am001;
    public:
        void SetSum(Account& a, int newam500, int newam200, int newam100, int newam50, int newam20, int newam10, int newam5, int newam2, int newam1, int newam050, int newam025, int newam010, int newam005, int newam002, int newam001);

        Account SumSum(Account& a, Account& b);
        Account DiffSum(Account& a, Account& b);
        Account ProdSum(Account& a, Account& b);
        Account DivSum(Account& a, Account& b);
        Account MultOnNum(Account& a, long double number);
        Account DivOnNum(Account& a, long double number);
        void Comp(Account& a, Account& b);
    };

    void SetName(string value) { name = value; }
    void SetNum(int value) { num = value; }
    void SetPerc(double value) { perc = value; }
    string GetName() { return name; }
    int GetNum() { return num; }
    double GetPerc() { return perc; }
    double GetSum() { return sum; }
    void Init(string name1, int num1, double perc1, double sum1);
    void Read();
    void Display();

    void ChangeName(string value) { name = value; }
    void Withdraw(double value);
    void TopUp(double value);
    void Interest();
    void Dollar();
    void Euro();

    string toString();
};

