#include<iostream>
using namespace std;

template <typename T1>
class goo{
	T1 x,y;
	;
	public:
		goo(T1 a,T1 b) {
			x=a;
			y=b;
		}
		void findmaxmin () {
		   if(x>y) {
		   	cout<<"x is greater::" << x << endl;
		   }
		   else {
		   	cout<<"y is greater::" << y << endl;
		   	
		   }
		   
		}
};

int main()  
{
	goo <int> obj(100,200);
	goo <double> obje(200.4, 500.32);
	goo <string> objec("hello" , "world");
	goo <float> object(8.5,91.0);
	obj.findmaxmin();
	obje.findmaxmin();
	objec.findmaxmin();
	object.findmaxmin();
	return 0;
} 