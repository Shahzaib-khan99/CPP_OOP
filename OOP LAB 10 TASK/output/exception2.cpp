#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        if (b == 0)
        {
            throw "divide by 0 cause an error ";
        }

        return a / b;
    }
    catch (const char *msg)
    {
        cout << "exception caught =" << msg;
    }
    return 0;
}