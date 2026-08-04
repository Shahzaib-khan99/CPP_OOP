#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 x;
    T2 y;

public:
    Pair(T1 a, T2 b) {
        x = a;
        y = b;
    }

    void swapValues() {
        auto temp = x;
        x = y;
        y = temp;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Pair<int, float> p(10, 4.5);
    p.display();
    p.swapValues();
    p.display();

    cout << endl;

    Pair <double , float> q(20.05 , 10.6);
    q.display();
    q.swapValues();
    q.display();
    return 0;
}
