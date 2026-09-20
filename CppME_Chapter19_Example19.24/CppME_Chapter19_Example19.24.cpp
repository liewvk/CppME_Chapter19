#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSalary(double s)
    {
        if (s >= 0)
            salary = s;
        else
            salary = 0;
    }

    string getName()
    {
        return name;
    }

    double getSalary()
    {
        return salary;
    }

    void displayInfo()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Salary       : " << salary << endl;
    }
};

int main()
{
    Employee emp;

    emp.setName("Sarah Lim");
    emp.setSalary(3500.0);
    emp.displayInfo();

    return 0;
}
