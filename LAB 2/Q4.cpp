#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
    int accno;
    string name;
    float bal,dip,with;
    public:
    void input()
    {
        cout<<"Enter Account holder name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter account number and balance"<<endl;
        cin>>accno>>bal;
    }
    void Diposit()
    {
        cout<<"Enter diposited amount"<<endl;
        cin>>dip;
    }
    void Withdraw()
    {
        cout<<"Enter withdrawal account"<<endl;
        cin>>with;
    }
    void Updates()
    {
        cout<<"Account number:"<<accno<<endl;
        cout<<"Account holder name:"<<name<<endl;
        if (with>bal)
        {
        cout<<"REQUESTED AMOUNT IS GREATER THAN AVAILABLE BALANCE"<<endl;
        cout<<"Balance:"<<bal+dip<<endl;
        }
        else
        cout<<"Balance:"<<bal+dip-with<<endl;
    }

};
int main()
{
    BankAccount b;
    b.input();
    b.Diposit();
    b.Withdraw();
    b.Updates();
    return 0;
}