#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    double mark;

public:
    void setName(string n)
    {
        name = n;
    }

    void setMark(double m)
    {
        if (m >= 0 && m <= 100)
            mark = m;
        else
            mark = 0;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Brian");
    s1.setMark(92.5);
    s1.displayInfo();

    return 0;
}
