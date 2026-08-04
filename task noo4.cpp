#include<iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int x = 0) {
        n = x;
    }

    void print() {
        cout << n << endl;
    }

    friend Number operator-(const Number& obj);
};

Number operator-(const Number& obj) {
    Number temp;
    temp.n = -obj.n;
    return temp;
}

int main() {
    Number a(10);
    Number b = -a;
    b.print();
    return 0;
}
