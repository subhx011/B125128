#include <iostream>
using namespace std;
class Door
{
private:
int doorno;
bool status;
public:
void accept()
{
    cout<<"Enter door number:";
    cin>>doorno;
    cout<<"Enter lock status(1 for Locked, 0 for Unlocked):";
    cin>>status;
}
friend class SecuritySystem;
};
class SecuritySystem
{
public:
void check(Door d)
{
    cout << "Door Number: "<<d.doorno<<endl;
    if (d.status)
    cout<<"Status:Locked"<<endl;
    else
    cout<<"Status: Unlocked"<<endl;
    }
};

int main()
{
    Door d;
    SecuritySystem s;
    d.accept();
    s.check(d);
    return 0;
}