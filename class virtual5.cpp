#include <iostream>
using namespace std;

class Root {
public:
    int value;
    Root() {
        value = 10;
        cout << "Root constructor\n";
    }
};

class Left : virtual private Root {
public:
    Left() { cout << "Left constructor\n"; }
};

class Right : virtual public Root {
public:
    Right() { cout << "Right constructor\n"; }
};

class FinalNode : public Left, public Right {
public:
    FinalNode() {
        cout << "FinalNode constructor\n";
        cout << "Shared value from Root = " << value << endl;
    }

    void show() {
        cout<<"i am the function of FinalNode class " << endl;
    }
};

int main() {
    FinalNode obj;
    obj.show();
}
