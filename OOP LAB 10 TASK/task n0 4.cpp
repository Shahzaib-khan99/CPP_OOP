#include<iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        normalize();
    }

    Distance(double value) {
        feet = (int)value;
        inches = (value - feet) * 12;
        normalize();
    }

    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
        else if (inches < 0) {
            int borrow = ((-inches) / 12) + 1;
            feet -= borrow;
            inches = 12 - ((-inches) % 12);
        }
    }

    int totalInches() const {
        return feet * 12 + inches;
    }

    double toDecimal() const {
        return feet + inches / 12.0;
    }

    void print() const {
        cout << "Feet = " << feet << ", Inches = " << inches << endl;
        cout << "Decimal feet = " << toDecimal() << endl;
    }

    friend Distance operator-(const Distance& a, const Distance& b);
    friend Distance operator-(double value, const Distance& d);
};

Distance operator-(const Distance& a, const Distance& b) {
    int diff = a.totalInches() - b.totalInches();
    return Distance(0, diff);
}

Distance operator-(double value, const Distance& d) {
    Distance left(value);
    int diff = left.totalInches() - d.totalInches();
    return Distance(0, diff);
}

int main() {
    Distance d1 = 3.5;
    Distance d2 = 2.6;

    Distance result = d1 - d2;
    result.print();

    return 0;
}
