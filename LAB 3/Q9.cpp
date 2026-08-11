#include <iostream>
using namespace std;

class Product
{
    int productID;
    string productName;
    float price;
    int quantity;

public:

    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
        cout << endl;
    }

    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];

    cout << "\nEnter product details:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cart[i].input();
    }
    cout << "\n--- Shopping Cart ---\n";

    for (int i = 0; i < n; i++)
    {
        cart[i].display();
    }
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + cart[i].getCost();
    }

    cout << "Total Amount = " << total << endl;
    delete[] cart;

    return 0;
}