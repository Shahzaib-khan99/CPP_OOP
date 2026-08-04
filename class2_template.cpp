#include<iostream>
using namespace std;

template <typename T1, typename T2>
class goo{
	T1 x;
	T2 y;
	public:
		goo(T1 a,T2 b) {
			x=a;
			y=b;
		}
		int add () {
			cout<<"addition of two number is=" << (x+y) << endl;
			return 0;
		}
};

int main()
{
	goo <int,float> obj(100,200.2);
	goo <float,double> obje(200.4, 500.32);
	goo <string,string> objec("hello" , "world");
	goo <float,float> object(8.5,91.0);
	obj.add();
	obje.add();
	objec.add();
	object.add();
	return 0;
} 