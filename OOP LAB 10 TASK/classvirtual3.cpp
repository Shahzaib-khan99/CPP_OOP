#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base version\n";
    }
};

class X : virtual public Base {
public:
    void showX() {
        cout << "X depends on Base\n";
    }
};

class Y : virtual public Base {
public:
    void showY() {
        cout << "Y depends on Base\n";
    }
};

class W : virtual public Base {
    public:
    void showw() {
        cout << " w depend on base \n" ;
    }
};

class Z : public X, public Y, private W {
public:
    void display() {
        show();  
        showX();
        showY();
        showw();
    }
};

int main() {
    Z obj;
    obj.display();
}
