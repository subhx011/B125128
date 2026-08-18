#include <iostream>
using namespace std;
class Parking
{
private:
string status,vno;
int sno;
public:
void accept()
{
    cout<<"Enter slot number:";
    cin>>sno;
    cout<<"enter vehicle number:";
    cin.ignore();
    getline(cin,vno);
    cout<<"enter occupancy status:";
    cin>>status;
}
friend void compute(Parking d);
};
void compute(Parking d)
{
    cout<<"Slot number:"<<d.sno<<endl;
    if (d.status=="yes" || d.status=="Yes")
    {
    cout<<"SLOT AVAILABLE"<<endl;
    cout<<"Vehicle number:"<<d.vno<<endl;
    }
    else
    cout<<"SLOT NOT AVAILABLE";
}
int main()
{
    Parking d;
    d.accept();
    compute(d);
    return 0;
}