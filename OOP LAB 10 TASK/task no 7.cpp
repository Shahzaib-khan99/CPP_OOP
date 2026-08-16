

#include<iostream>
using namespace std;

template <class T>
class StorageBox 
{
    T value;
public:
      StorageBox(T v) 
    {
        value = v;
    }

    void setValue(T v)
     {
        value = v;
    }

               T getValue() const {
        return value;
    }

         bool compare(const StorageBox<T>& obj) const {
        return value == obj.value;
    }
}; 

int main()
 {
    StorageBox<int> a(10);
    StorageBox<int> b(10);
    cout << a.compare(b) << endl;

    StorageBox<string> s1("Hello");
    StorageBox<string> s2("World");
    cout << s1.compare(s2) << endl;

    StorageBox<double> d1(5.6);
    StorageBox<double> d2(5.6);
    cout << d1.compare(d2) << endl;

    return 0;
}
