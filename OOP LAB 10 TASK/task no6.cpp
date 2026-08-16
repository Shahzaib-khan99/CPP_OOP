
#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber
{
    double real;
    double imag;

public:
    ComplexNumber(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    double operator~()

    {
        return sqrt(real * real + imag * imag);
    }

    ComplexNumber operator+(const ComplexNumber &c)
    {
        return ComplexNumber(real + c.real, imag + c.imag);
    }

   
    friend ComplexNumber operator*(const ComplexNumber &c1, const ComplexNumber &c2);

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

ComplexNumber operator*(const ComplexNumber &c1, const ComplexNumber &c2)

{
    double r = c1.real * c2.real - c1.imag * c2.imag;

    double i = c1.real * c2.imag + c1.imag * c2.real;
    return ComplexNumber (r,i);
}
   
int main()
{
    ComplexNumber c1(3, 4);
    ComplexNumber c2(11, 6);
    ComplexNumber c7(7,8);
    ComplexNumber c8 (15,9);

    ComplexNumber c3 = c1 + c2;
    ComplexNumber c4 = c1 * c2;
    ComplexNumber c5 = c7 + c8;
    ComplexNumber c6 = c7 * c8;

    double mag = ~c1;
    double mag1 = ~c2;
    double mag2 = ~c7;
    double mag3 = ~c8;

    cout << "c1 + c2 = ";
    c3.display();
    cout << "c1 * c2 = ";
    c4.display();
    cout << "Magnitude of c1 = " << mag << endl;
    cout << "magnitude of c2 is=" << mag1 << endl;
    cout <<"magnitude of c7 is =" << mag2 << endl;
    cout<<"magnitude of c8 is= " << mag3 << endl;

    return 0;
}
