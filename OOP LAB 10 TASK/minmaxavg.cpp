#include <iostream>
using namespace std;

template <class T>
class Stats {
    T arr[50];
    int n;

public:
    Stats() {
        n = 0;
    }

    void add(T x) {
        arr[n] = x;
        n++;
    }

    void sortinput() {
        
        cout << "Enter the number of elements: " << endl;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cout << "Enter element " << i+1 << ": ";
            cin >> arr[i];
        }
    }

    void sort() {
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < n-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    cout <<" :the swapped array: " << endl;
                    swap(arr[j], arr[j+1]);
                    
                }
            }
        }
    }

    void displaysort()
    {
        cout << "Sorted array: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    T minimum() {
        T minindex = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] < minindex) minindex = arr[i];
        return minindex;
    }

    T maximum() {
        T maxindex = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > maxindex) maxindex = arr[i];
        return maxindex;
    }

    double average() {
        double sum = 0;
        for (int i = 0; i < n; i++)     
            sum += arr[i];
        return sum / n;
    }
};

int main() {
    Stats<float> Obj;
    Stats <int> Obj1;

    Obj.add(10.5);
    Obj.add(5.7);
    Obj.add(30.4);
    Obj.add(15.9);


    Obj.sort();
    Obj.displaysort();

    cout << "Minimum: " << Obj.minimum() << endl;
    cout << "Maximum: " << Obj.maximum() << endl;
    cout << "Average: " << Obj.average() << endl;

    
    Obj1.add(10);
    Obj1.add(5);
    Obj1.add(30);
    Obj1.add(15);


    Obj1.sort();
    Obj1.displaysort();

    cout << "Minimum: " << Obj1.minimum() << endl;
    cout << "Maximum: " << Obj1.maximum() << endl;
    cout << "Average: " << Obj1.average() << endl;


    return 0;
}