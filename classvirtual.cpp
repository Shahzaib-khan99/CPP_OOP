#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor\n";
    }
};

class Student : virtual public Person {
    public:
    Student () {
        cout << "hi i am student constructor " << endl;
    }
    
};
class Teacher : virtual public Person {
    public: 
    Teacher () {
        cout<<"teacher constructor" << endl;
    }

};
class theta :   virtual private Person {
    public :
    theta(){

    cout <<"hi i am theta constructor" << endl;
}
};


class TA : public Student, public Teacher , private theta {
public:
    TA() {
        cout << "TA constructor\n";
    }
};

int main() {
    TA obj;
}
