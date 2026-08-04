#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;
    float marks;
    public:
    void details()
    {
        cout<<"Enter name"<<endl;
        cin.ignore();
        cout<<"Enter Consumer Name:"<<endl;
        getline(cin, name);
        cout<<"Enter roll number and marks in one subject"<<endl;
        cin>>roll>>marks;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main()
{
    Student s;
    s.details();
    s.display();
    return 0;
}
