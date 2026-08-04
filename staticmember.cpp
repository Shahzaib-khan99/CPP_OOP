#include <iostream>
using namespace std;

class Student
{
public:
    static int totalStudents;
    static int totalalpha;
    static int totalbeta;
    static int totalgamma;
    Student()
    {
        totalStudents++;
        totalalpha++;
        totalbeta++;
        totalgamma++;
    }
};

int Student::totalStudents = 0;
int Student::totalalpha = 0;
int Student::totalbeta = 0;
int Student::totalgamma = 0;
int main()
{
    Student s1;
    Student s2;
    Student s3;

     Student a1;
    Student a2;
    Student a3;

     Student b1;
    Student b2;
    Student b3;

     Student g1;
    Student g2;
    Student g3;

    cout << "Total students = " << Student::totalStudents << endl;
      cout << "Total alpha = " << Student::totalalpha << endl;
        cout << "Total beta = " << Student::totalbeta << endl;
          cout << "Total gamma = " << Student::totalgamma << endl;

    return 0;
}
