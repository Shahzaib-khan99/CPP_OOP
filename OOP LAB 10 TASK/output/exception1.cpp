#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    try
    {
        ifstream file;
        file.open("data.txt");
        if (!file)
        {
            throw runtime_error("file can't be open");
        }

        cout << " file is created successfully" << endl;
        
        file.close();
    }
    catch (const runtime_error &msg)
    {

        cout << " exception caught " << msg.what() << endl;
        cout <<" my task completed : exception handled successfully " << endl;
    }

    return 0;
}
