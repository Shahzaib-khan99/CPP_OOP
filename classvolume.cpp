#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l, double w, double h)
        : length(l), width(w), height(h) {}

    double volume() const {
        length =10;
        return length * width * height;
    }
};

int main() {
    Box box1(3.5, 2.0, 4.0);
    const Box box2(5.0, 3.0, 2.0);

    cout << "Volume of box1: " << box1.volume() << endl;
    cout << "Volume of box2: " << box2.volume() << endl;

    return 0;
}