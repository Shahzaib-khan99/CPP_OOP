#include <iostream>
using namespace std;

class Calculator
{
public:
    void divide(int a, int b)
    {
        if (b == 0)
            throw "Division by zero error";

        cout << "Result = " << a / b << endl;

    }
};

class Student
{
public:
    void useCalculator(Calculator& c)   
    {
        c.divide(10, 5);
        c.divide(100, 150);
        c.divide(100,5);
        c.divide(25 , 7);
        c.divide(9, 200);
        c.divide(200, 0);
        c.divide(250 , 5);

    }
};

int main()

{
    Calculator calc;   
    Student s;

    try
    {
        s.useCalculator(calc);  
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
 