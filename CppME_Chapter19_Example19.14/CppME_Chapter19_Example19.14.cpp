#include <iostream>
using namespace std;

class Fan
{
private:
    int speed;
    bool isOn;

public:
    Fan()
    {
        speed = 0;
        isOn = false;
    }

    void turnOn()
    {
        isOn = true;
        cout << "Fan is now on." << endl;
    }

    void turnOff()
    {
        isOn = false;
        speed = 0;
        cout << "Fan is now off." << endl;
    }

    void setSpeed(int s)
    {
        if (isOn && s >= 1 && s <= 5)
        {
            speed = s;
            cout << "Fan speed set to " << speed << endl;
        }
    }
};

int main()
{
    Fan f1;

    f1.turnOn();
    f1.setSpeed(3);
    f1.turnOff();

    return 0;
}
