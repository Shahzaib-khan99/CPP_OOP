#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;
public:
    Engine() {
        cout << "Engine constructed\n";
    }
};

class Petrol : virtual protected Engine {};
class Electric : virtual protected Engine {};

class Hybrid : private Petrol, private Electric {
public:
    Hybrid() {
        horsepower = 250;  
        cout << "Hybrid constructed, HP = " << horsepower << endl;
    }
};

int main() {
    Hybrid h;
}
