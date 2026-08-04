#include <iostream>
using namespace std;
class ElectricityBill
{
    int cno;
    string name;
    int units;
    float bill;
    public:
    void input()
    {
        cout << "Enter Consumer Number:"<<endl;
        cin>>cno;
        cin.ignore();
        cout<<"Enter Consumer Name:"<<endl;
        getline(cin, name);
        cout<<"Enter Units Consumed:"<<endl;
        cin>>units;
    }
    void calculate()
    {
        if(units<=100)
        bill=units*5;
        else if(units<=200)
        bill=(100*5)+((units-100)*7);
        else
        bill=(100*5)+(100*7)+((units-200)*10);
    }
    void display()
    {
        cout << "Consumer Number : " << cno<<endl;
        cout << "Consumer Name : " << name<<endl;
        cout << "Units Consumed : " << units<<endl;
        cout << "Total Bill : Rs. " << bill<<endl;
    }
};

int main()
{
    ElectricityBill e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}