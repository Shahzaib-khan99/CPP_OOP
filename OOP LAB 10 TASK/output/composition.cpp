#include <iostream>
using namespace std;

class Patient
{
public:
    void appointment()
    {
        cout << "Your appointment has been booked successfully" << endl;
        
    }
};

class Doctor
{
    Patient pati;   

public:
    void doc()
    {
        pati.appointment();
    }
};

int main()
{
    Doctor d;
    d.doc();
    return 0;
}
