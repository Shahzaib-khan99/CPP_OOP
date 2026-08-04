#include<iostream>
using namespace std;

template <typename T1, typename T2>
class goo {
    T1 x;
    T2 y;

public:
    goo(T1 a, T2 b) {
        x = a;
        y = b;
    }

    void findmaxmin() {
        if (x > y) {
            cout << "x is greater: " << x << endl;
        } else {
            cout << "y is greater: " << y << endl;
        }
    }
};

int main()
{
    goo<int, int> obj(10000000, 200);
    goo<double, double> obje(20090.4, 500.32);
    goo<string, string> objec("ghythello", "cooworld");
    goo<float, float> object(899.5f, 91.0f);

    obj.findmaxmin();
    obje.findmaxmin();
    objec.findmaxmin();
    object.findmaxmin();

    return 0;
}
