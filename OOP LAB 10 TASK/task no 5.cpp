#include<iostream>
using namespace std;

class printhelper {
    
    public:
    void print(int a) {
        
        cout << "the value of a is =" << a << endl;

    }

    void print(double b) {

        cout<<"the value of b is = " << b << endl;
    }
    void print (string c) {
        cout << " the value of c is =" << c << endl;

    }
    };

    int main() {
        printhelper p;
        p.print(12);
        p.print(20.00);
        p.print("hello world");

        return 0;

    }