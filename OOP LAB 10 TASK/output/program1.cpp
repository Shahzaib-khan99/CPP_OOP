#include <iostream>
using namespace std;

class A
{
    int balance;
    string name;

public:
    A(int b, string s)
    {
        balance = b;
        name = s;
    }

    friend class B;
};

class B
{

public:
    void modify(A &a, int amount)
    {
        a.balance += amount;
        cout << "modify amount is =" << a.balance;
    }
};

int main()
{
    A account(5000, "ali");

    B obj;
    obj.modify(account, 10000);
}
