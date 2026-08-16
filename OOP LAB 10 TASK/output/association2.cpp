#include <iostream>
using namespace std;
class patient
{
public:
    void appointment()
    {
        cout << "your appointnment has been book successfully " << endl;
    }
};

class doctor
{

public:
  void   doc(patient &pati)
    {

        pati.appointment();
    }
};

int main()
{
    patient p;
    doctor d;
    d.doc(p);
    return 0;
}
