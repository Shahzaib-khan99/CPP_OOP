#include <iostream>
using namespace std;

class Device {
public:
    Device(int id) {
        cout << "Device created with ID " << id << endl;
    }
};

class Keyboard : virtual public Device {
public:
    Keyboard(int id) : Device(id) {
        cout << "Keyboard ready with id /n" << endl;
    }
};

class Screen : virtual public Device {
public:
    Screen(int id) : Device(id) {
        cout << "Screen ready\n";
    }
};

class Laptop : public Keyboard, public Screen {
public:
    Laptop(int id) : Device(id), Keyboard(id), Screen(id) {
        cout << "Laptop booted\n";
    }
};

int main() {
    Laptop l(101);
}
