#include <iostream>
#include <string>
using namespace std;
class Student_result
{
    string name;
    int roll;
    float m1,m2,m3,m4,m5,tm,per;
    public:
    void input()
    {
        cout<<"Enter name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll number"<<endl;
        cin>>roll;
        cout<<"Enter marks in 5 subjects"<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    void calculate()
    {
        tm=m1+m2+m3+m4+m5;
        per=(tm/500)*100;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<roll<<endl;
        cout<<"Total marks:"<<tm<<endl;
        cout<<"Percentage:"<<per<<endl;
        if (per>=90)
        cout<<"Grade A"<<endl;
        else if(per>=80 && per<90)
        cout<<"Grade B"<<endl;
        else if(per>=70 && per<80)
        cout<<"Grade C"<<endl;
        else if (per>=60 && per<70)
        cout<<"Grade D"<<endl;
        else
        cout<<"Grade E";
    }

};
int main()
{
    Student_result s;
    s.input();
    s.calculate();
    s.display();
    return 0;

}