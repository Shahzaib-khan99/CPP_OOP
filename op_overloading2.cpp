#include <iostream>
using namespace std;

class Number {
    double x;
public:
    Number(double  a=0) : x(a) {}

    Number operator+(Number n) { return Number(x + n.x); }
    Number operator-(Number n) { return Number(x - n.x); }
    Number operator*(Number n) { return Number(x * n.x); }
    Number operator/(Number n) { return Number(x / n.x); }

    void show() { cout << x << endl; }
};

int main() {  
    Number a(209.775), b(7.89);

    Number c = a + b;
    Number d = a - b;
    Number e = a * b;
    Number f = a / b;

    c.show();
    d.show();
    e.show();
    f.show();
}
  