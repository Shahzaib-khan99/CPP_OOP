#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a=0) : x(a) {}
    
    bool operator==(Number n) { return x == n.x; }
    bool operator!=(Number n) { return x != n.x; }
    bool operator>(Number n)  { return x >  n.x; }
    bool operator<(Number n)  { return x <  n.x; }
    bool operator>=(Number n) { return x >= n.x; }
    bool operator<=(Number n) { return x <= n.x; }
};

int main() {
    Number a(10), b(20);

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b)  << endl;
    cout << (a < b)  << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
}
 