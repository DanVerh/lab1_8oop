//Account.h

#pragma once
#include <string>
using namespace std;

class Account {
private:
    string name;
    int num;
    double perc;
public:
    class Money {
    private:
        double am500, am200, am100, am50, am20, am10, am5, am2, am1, am050, am025, am010, am005, am002, am001;
    public:
        bool Init(int newam500, int newam200, int newam100, int newam50, int newam20, int newam10, int newam5, int newam2, int newam1, int newam050, int newam025, int newam010, int newam005, int newam002, int newam001);
        double Sum();

        friend Money doubleMoney(double value);
        friend double SumSum(Money a, Money b);
        friend double DiffSum(Money a, Money b);
        friend double ProdSum(Money a, Money b);
        friend double DivSum(Money a, Money b);
        friend Money MultOnNum(Money a, double value);
        friend Money DivOnNum(Money a, double value);
        friend bool Less(Money a, Money b);
        friend bool Greater(Money a, Money b);
        friend bool Equal(Money a, Money b);
        friend bool NotEqual(Money a, Money b);

        string toString();
        void Read();
        void Display();
    };

    void SetName(string value) { name = value; }
    void SetNum(int value) { num = value; }
    void SetPerc(double value) { perc = value; }
    void SetMoney(Money value) { sum = value; }
    string GetName() { return name; }
    int GetNum() { return num; }
    double GetPerc() { return perc; }
    Money GetSum() { return sum; }
    void Init(string name1, int num1, double perc1, Money sum1);
    void Read();
    void Display();

    void ChangeName(string value) { name = value; }
    void Withdraw(Money value);
    void TopUp(Money value);
    void Interest();
    void Dollar();
    void Euro();

    string toString();
private:
    Money sum;
};

