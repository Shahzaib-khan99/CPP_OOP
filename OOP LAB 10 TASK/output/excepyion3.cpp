#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    int index = 10;

    try
    {

        if (index < 0 || index >= 5)
        {
            throw "error occur at the index";
        }
        cout << arr[index];
    }

    catch (const char *msg)
    {
        cout << "exception accur " << msg << endl;
    }
    return 0;
} 