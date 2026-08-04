#include <iostream>
using namespace std;

// ==========================
// Virtual Base Class
// ==========================
class Data {
protected:
    int arr[5];   // array to sort
public:
    void input() {
        cout << "Enter 5 numbers: ";
        for(int i=0; i<5; i++)
            cin >> arr[i];
    }

    void display() {
        cout << "Array: ";
        for(int i=0; i<5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// ==========================
// Derived class 1: Ascending sort
// ==========================
class AscSort : virtual public Data {
public:
    void sortAscending() {
        for(int i=0; i<5; i++) {
            for(int j=i+1; j<5; j++) {
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

// ==========================
// Derived class 2: Descending sort
// ==========================
class DescSort : virtual public Data {
public:
    void sortDescending() {
        for(int i=0; i<5; i++) {
            for(int j=i+1; j<5; j++) {
                if(arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

// ==========================
// Multiple inheritance: Both sorts
// ==========================
class SortAll : public AscSort, public DescSort { };

int main() {
    SortAll s;

    s.input();           // input array
    s.sortAscending();   // sort ascending
    cout << "Ascending Order: ";
    s.display();

    s.sortDescending();  // sort descending
    cout << "Descending Order: ";
    s.display();

    return 0;
}
  