#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a >= 0)
            age = a;
        else
            age = 0;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person p1;

    p1.setName("Alice");
    p1.setAge(21);

    cout << "Name: " << p1.getName() << endl;
    cout << "Age : " << p1.getAge() << endl;

    return 0;
}
