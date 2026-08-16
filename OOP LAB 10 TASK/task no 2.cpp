#include<iostream>
using namespace std;

class vector2d {
    
    int x,y;

    public:

    vector2d (int a , int b) {
        x=a;
        y=b;
    }
  
    vector2d operator + (const vector2d& obj)
    {
        return vector2d(x + obj.x, y + obj.y);  
    }
     
    void print() const {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    vector2d v1(3,4) , v2(1,2);
    vector2d v3 = v1+v2;
    v3.print();

    return 0;

}