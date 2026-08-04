#include <iostream>
#include <string>
using namespace std;
class Product
{
    int id,qty,uqty;
    string name;
    float ppu,iv;
    public:
    void input()
    {
        cout<<"Enter product name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter product id, quantity available and price per unit"<<endl;
        cin>>id>>qty>>ppu;
    }
    void Display()
    {
        cout<<"Product id:"<<id<<endl;
        cout<<"Product name:"<<name<<endl;
        cout<<"Quantity available:"<<qty<<endl;
        cout<<"Price per unit:"<<ppu<<endl;
    }
    void Updates()
    {
        cout<<"Enter the number of units sold"<<endl;
        cin>>uqty;
        if (uqty>qty)
        cout<<"STOCK NOT AVAILABLE";
        else
        qty=qty-uqty;
        cout<<"Quantity after selling:"<<qty<<endl;
    }
    void Total()
    {
        iv=qty*ppu;
        cout<<"Inventory value:"<<iv<<endl;
    }

};
int main()
{
    Product b;
    b.input();
    b.Display();
    b.Updates();
    b.Total();
    return 0;
}