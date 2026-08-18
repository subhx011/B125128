#include <iostream>
using namespace std;

class FoodOrder
{
private:
    int id,qty;
    string item;
    float price;

public:
    void accept()
    {
        cout << "Enter Order ID: ";
        cin >> id;

        cout << "Enter food item: ";
        cin >> item;

        cout << "Enter quantity: ";
        cin >> qty;

        cout << "Enter price per item: ";
        cin >> price;
    }

    friend void calculate(FoodOrder f);
};

void calculate(FoodOrder f)
{
    float total = f.qty * f.price;
    cout << "Order ID: " << f.id << endl;
    cout << "Food Item: " << f.item << endl;
    cout << "Quantity: " << f.qty << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << total << endl;
}

int main()
{
    FoodOrder f;
    f.accept();
    calculate(f);

    return 0;
}