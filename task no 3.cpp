#include<iostream>
using namespace std;

class Distance{
    
    int feet;
    int inches;

    public:
    Distance (int f , int i)
     {
        feet =f;
        inches = i;
    }
    void print( ) const {
    cout << "feets is =" << feet <<""<< " and inches is =" << inches << endl;
}

friend Distance operator - (const Distance&ob , const Distance&obj1);

friend Distance operator - (double getvalue, const Distance& obj3);

void normalize ()  {
    if(inches > 12) {
        feet += inches/12;
        inches = inches%12;
    }
    else if(inches < 0) {
        feet -= 1+(-inches)/12;
        inches = 12-(-inches)%12;
    }
}


};
 
Distance operator - (const Distance& ob, const Distance&obj1 )
    {
        return Distance (ob.feet-obj1.feet, ob.inches-obj1.inches);
    }    

Distance operator -( double getvalue , const Distance&obj3)
    {
        return Distance ((int)getvalue - obj3.feet, (int)((getvalue - (int)getvalue)*12) - obj3.inches);
    }
    
    int main() {
        Distance d1(5.6, 3.3) , d2(3.5, 1.2);
        Distance d3 = d1-d2;

        d3.print();
        
         Distance d4 = 3.5-d3;
         d4.print();
        return 0;
    }