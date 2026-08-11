#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id;
    string name;
    float sal;
    public:
    void input()
    {
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"enter salary"<<endl;
        cin>>sal;
    }
    void display()
    {
        cout<<"Employee id:"<<id<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"salary:"<<sal<<endl;
    }
};
int  main()
{
    Employee* s=new Employee;
    s->input();
    s->display();
    delete s;
    return 0;
}