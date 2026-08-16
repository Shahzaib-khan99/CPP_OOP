#include<iostream>
using namespace std;

class counter {
    private:
    int value;

    public:
    counter( int v=0) {
        value =v;

    }  

    counter operator ++ () {
        value++;
        return *this;
    }

    counter operator ++ (int) 
	{
        counter temp = *this;
        value++;
        return temp;
    }
              
    int getValue()  
	{
        return value;
    }
    
    };

    int main()
    {
    counter c1(5);
    counter c2(6);
    ++c1;
    cout << c1.getValue() << endl;
    c2++;
    cout<< c2.getValue() << endl;
    return 0;
}