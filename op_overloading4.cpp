#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a=0) : x(a) {}

    bool operator&&(Test t) { return x && t.x; }
    bool operator||(Test t) { return x || t.x; }
    bool operator!()        { return !x; }
};

int main() {
    Test a(1), b(0);

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << (!a) << endl;
}
     