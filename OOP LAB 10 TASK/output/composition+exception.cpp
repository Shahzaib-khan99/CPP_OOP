#include <iostream>
#include <stdexcept>
using namespace std;

class Engine
{
public:
    void start()
    {
        throw runtime_error("Engine failure");
    }
};

class Car
{
    Engine engine;   

public:
    void startCar()
    {
        engine.start();   
    }

    void endcar() {
        engine.start();
    }
};

int main()
{
    Car car; 
    try
    {
        car.startCar();
        car.startCar();
    }
    catch (exception& e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
