#include <iostream>
using namespace std;
class Employee
{
    protected:
    string name;
    double bs;

    public:
    Employee(string n,double s)
    {
        name=n;
        bs=s;
    }
};
class Developer : public Employee
{
    protected:
    int experience;
    
    public:
    Developer(string n,float s,int e):Employee (n,s)
    {
        experience =e;
    }
};

class SeniorDeveloper: public Developer
{
    private:
    double projectbonus;

    public:
    SeniorDeveloper(string n,double s,int e, double p):Developer(n,s,e)
    {
        projectbonus=p;
    }

    void display()
    {
        double expbonus=0.05*bs*experience;
        double fs=bs+expbonus+projectbonus;
        cout<<"Name:"<<name<<endl;
        cout<<"Basic Salary:"<<bs<<endl;
        cout<<"Experience bonus:"<<expbonus<<endl;
        cout<<"Project bonus:"<<projectbonus<<endl;
        cout<<"Final salary:"<<fs<<endl;
    }
    
};
int main()
{
    SeniorDeveloper s("Sia",50000,4,10000);
    s.display();
    return 0;
}