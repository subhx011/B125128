#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;
    float marks;
    public:
    void input()
    {
        cout<<"enter roll number"<<endl;
        cin>>roll;
        cout<<"enter name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"enter marks"<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"roll number:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int  main()
{
    Student* s=new Student;
    s->input();
    s->display();
    delete s;
    return 0;
}