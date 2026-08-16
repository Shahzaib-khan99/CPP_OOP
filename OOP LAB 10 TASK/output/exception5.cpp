#include <iostream>
#include <string>
using namespace std;

int main()
 {
    try 
    {
        int choice ;
        cout <<"enter your choice " << endl;
        cin >> choice; 
        
        if (choice == 1)
            throw 10;               
        else if (choice == 2)
            throw 5.5;              
        else if (choice == 3)
            throw string("String exception occurred");
    }
    catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (double e) {
        cout << "Double exception caught: " << e << endl;
    }
    catch (string e) {
        cout << "String exception caught: " << e << endl;
    }

    return 0;
}
