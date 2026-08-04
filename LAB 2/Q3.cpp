#include <iostream>
using namespace std;
class Calculator
{
    float a,b,sum,sub,mul,div;
    public:
    void input()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
    }
    void add()
    {
        sum=a+b;
        cout<<"Sum="<<sum<<endl;
    }
    void subtract()
    {
        sub=a-b;
        cout<<"Difference="<<sub<<endl;
    }
    void multiply()
    {
        mul=a*b;
        cout<<"Product="<<mul<<endl;
    }
    void division()
    {
        if (b==0)
        cout<<"DIVISION ERROR"<<endl;
        else
        {div=a/b;
        cout<<"Division="<<div<<endl;}
    }
};
int main()
{
    Calculator c;
    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.division();
    return 0;
}
