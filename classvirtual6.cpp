#include <iostream>
using namespace std;

class sort {
public:
    int arr[50];
    int n;

    public :
    sort() {
        cout<< "i am sorter class constructor" << endl;
    
    }
    void input() {
        cout << "enter how many element you want in array" << endl;
        cin >>n;
        for(int i=0; i<n; i++)
        {
            cout<<"enter element in array::" << i+1 << endl;
            cin >> arr[i];
        }

    }

    void display() {
        for(int i =0; i<n; i++) {
            cout << arr[i] <<" ";
            cout<<endl;
            
        }
    }
};

class bubble : virtual public sort 
{
    public:
    void bubblesort() {
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap (arr[j] , arr[j+1]);
                }
            }
        }

    }


};


class finalresult : public bubble {
    public:
    void callall() {
        cout<<"calling all the function" << endl;
        input();
        cout<<"before the sort" << endl;
        display();
        bubblesort();
        cout<<"after sort" << endl;
        display();
    }

};

int main() {
    finalresult obj;
    obj.callall();
}

