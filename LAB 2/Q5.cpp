#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id;
    string name;
    float sal,hra,da,gsal;
    public:
    void input()
    {
        cout<<"Enter Employee name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter employee id and basic salary"<<endl;
        cin>>id>>sal;
    }
    void Gross()
    {
        hra=0.2*sal;
        da=0.1*sal;
        gsal=sal+hra+da;
    }
    void Display()
    {
        cout<<"Employee id:"<<id<<endl;
        cout<<"Employee name:"<<name<<endl;
        cout<<"Gross salary:"<<gsal<<endl;
    }

};
int main()
{
    Employee b;
    b.input();
    b.Gross();
    b.Display();
    return 0;
}