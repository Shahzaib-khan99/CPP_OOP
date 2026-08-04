#include <iostream>
using namespace std;

class number {
    public :
    int a=100;
public:
    void show() {
        cout << "the value of number class  is =" << a << endl;
    }
};

class X : virtual public number {
    public:
    int b = 1000;

public:
    void showX() {
        cout << "the value of x class is=" << b << endl;
    }
};

class Y : virtual public number{
    public:
    int c =10000;
public:
    void showY() {
        cout << "the value of y classs is =" << c << endl;
    }
};

class W : virtual public number {
    public :
    int d =100000;
    public:
    void showw() {
        cout << " the value of w class is =" << d << endl ;
    }
};

class Z : public X, public Y, private W {
    public :
    int e =1000000;
public:

void showz() {
    cout <<"the value of z class is =" << e << endl;
}
    void printmyfunction() {
        show();  
        showX();
        showY();
        showw();
        showz();
    }
};

int main() {

    Z oop;
    oop.printmyfunction();
    
}
