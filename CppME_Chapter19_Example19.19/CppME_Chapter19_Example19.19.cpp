#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantity;

public:
    void setProduct(string n, double p, int q)
    {
        productName = n;

        if (p >= 0)
            price = p;
        else
            price = 0;

        if (q >= 0)
            quantity = q;
        else
            quantity = 0;
    }

    double calculateTotalValue()
    {
        return price * quantity;
    }

    void displayProduct()
    {
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Total Value  : " << calculateTotalValue() << endl;
    }
};

int main()
{
    Product p1;

    p1.setProduct("Keyboard", 80.0, 5);
    p1.displayProduct();

    return 0;
}
