#include <iostream>
using namespace std;

class Student
{
public:
    static int totalStudents;
    static int totalalpha;
    static int totalbeta;
    static int totalgamma;

    Student(char type)  
    {
        totalStudents++;
        if(type == 'A') totalalpha++;
        else if(type == 'B') totalbeta++;
        else if(type == 'G') totalgamma++;
    }
};

int Student::totalStudents = 0;
int Student::totalalpha = 0;
int Student::totalbeta = 0;
int Student::totalgamma = 0;

int main()
{
    Student s1('A'), s2('A'), s3('A');
    Student b1('B'), b2('B'), b3('B');
    Student g1('G'), g2('G'), g3('G');

    cout << "Total students = " << Student::totalStudents << endl;
    cout << "Total alpha = " << Student::totalalpha << endl;
    cout << "Total beta = " << Student::totalbeta << endl;
    cout << "Total gamma = " << Student::totalgamma << endl;

    return 0;
}
