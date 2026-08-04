#include <iostream>
using namespace std;

template <class T>
class Stats {
    T arr[50];
    int n;

public:
    Stats() {
        n= 0;
    }

    void add(T x) {
        arr[n] = x;
        n++;
    }

    void sortinput() {
        cout<<"enter the number of element " << endl;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cout<<"enter the element" << i+1 << endl;
            cin >> arr[i];
        }
    }

    T sort() {
        
        for(int i =0 ; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j] , arr[j+1])
                    
                }
            }
        }
    }

     void displaysort()
     {
       for(int i =0; i<n; i++) {
        cout<< arr[i];
       }
       cout << endl;
     }


    T minimum() {
        T minindex= arr[0];
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

    Obj.add(10.5);
    Obj.add(5.7);
    Obj.add(30.4);
    Obj.add(15.9);

    
    Obj.sort();
    Obj.displaysort();

    cout << "Minimum: " << Obj.minimum() << endl;
    cout << "Maximum: " << Obj.maximum() << endl;
    cout << "Average: " << Obj.average() << endl;


    return 0;
}  
