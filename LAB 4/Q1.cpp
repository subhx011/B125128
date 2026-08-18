#include <iostream>
using namespace std;
class Dairy
{
private:
string name,lent;
int ent;
public:
void accept()
{
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Number of entries:";
    cin>>ent;
    cout<<"enter last entry:";
    cin.ignore();
    getline(cin,lent);
}
friend void display(Dairy d);
};
void display(Dairy d)
{
    cout<<"Name:"<<d.name<<endl;
    cout<<"Number of entries:"<<d.ent<<endl;
    cout<<"Last entry:"<<d.lent<<endl;
}
int main()
{
    Dairy d;
    d.accept();
    display(d);
    return 0;
}