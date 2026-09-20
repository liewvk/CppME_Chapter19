#include <iostream>
using namespace std;

class Student
{
private:
    double mark;

public:
    void setMark(double m)
    {
        if (m >= 0 && m <= 100)
            mark = m;
        else
            mark = 0;
    }

    void displayMark()
    {
        cout << "Mark = " << mark << endl;
    }
};

int main()
{
    Student s1;

    s1.setMark(85);
    s1.displayMark();

    s1.setMark(150);
    s1.displayMark();

    return 0;
}
