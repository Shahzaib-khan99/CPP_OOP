#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int marks;
public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
    }

    void displayStudent() {
        cout << "Student Name: " << name << endl;
    }
};

class TestScore : virtual public Student {
protected:
    int testMarks;
public:
    void inputTestMarks() {
        cout << "Enter test marks: ";
        cin >> testMarks;
    }
};

class AssignmentScore : virtual public Student {
protected:
    int assignmentMarks;
public:
    void inputAssignmentMarks() {
        cout << "Enter assignment marks: ";
        cin >> assignmentMarks;
    }
};

class FinalResult : public TestScore, public AssignmentScore
 {
public:
    void calculateTotal() {
        marks = testMarks + assignmentMarks;
    }

    void displayResult() 
    {
        displayStudent();
        cout << "Test Marks: " << testMarks << endl;
        cout << "Assignment Marks: " << assignmentMarks << endl;
        cout << "Total Marks: " << marks << endl;
    }
};

int main() {
    FinalResult student1;

    student1.inputStudent();
    student1.inputTestMarks();
    student1.inputAssignmentMarks();

    student1.calculateTotal();
    student1.displayResult();

    return 0;
}
