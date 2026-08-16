#include <iostream>
using namespace std;

class Student {
public:
    static int totalStudents;
    Student() {
        totalStudents++;
    }

    static void showTotal() {  
        cout << "Total students = " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3,s4, s5,s6,s7,s8,s11,s12,s88,s99;
    Student::showTotal();  
    return 0;
}
