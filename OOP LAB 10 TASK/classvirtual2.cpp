#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A constructor\n"; }
};

class B : virtual public A {
public:
    B() { cout << "B constructor\n"; }
};

class C : virtual public A {
public:
    C() { cout << "C constructor\n"; }
};

class D : virtual public A {
public:
    D() { cout << "D constructor\n"; }
};

class Final : private B, private C, private D {
public:
    Final() {
        cout << "Final constructor\n";
    }
};

int main() {
    Final obj;}