#include <iostream>
using namespace std;
class Mobile
{
private:
string brand,model;
int per;
public:
void accept()
{
    cout<<"Enter brand name:";
    cin.ignore();
    getline(cin,brand);
    cout<<"enter model:";
    cin.ignore();
    getline(cin,model);
    cout<<"enter battery percentage:";
    cin>>per;
}
friend void compute(Mobile d);
};
void compute(Mobile d)
{
    cout<<"Brand:"<<d.brand<<endl;
    cout<<"model:"<<d.model<<endl;
    if (d.per>=20)
    cout<<"NORMAL BATTERY PERCENTAGE"<<endl;
    else
    cout<<"LOW BATTERY";
}
int main()
{
    Mobile d;
    d.accept();
    compute(d);
    return 0;
}