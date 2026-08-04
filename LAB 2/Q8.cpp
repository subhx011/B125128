#include <iostream>
#include <string>
using namespace std;
class LibraryBooks
{
    int id,days,f;
    string title,name;
    public :
    void input()
    {
        cout <<"Enter title"<<endl;
        cin.ignore();
        getline(cin,title);
        cout <<"Enter name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter book id and number of days the book was issued "<<endl;
        cin>>id>>days;
    }
    void fine()
    {
        if (days<=15)
        f=0;
        else
        f=(days-15)*2;
    }
    void display()
    {
        cout<<"Book id:"<<id<<endl;
        cout<<"Book title:"<<title<<endl;
        cout<<"Student name:"<<name<<endl;
        cout<<"Number of days book was issued:"<<days<<endl;
        cout<<"Fine:"<<f<<endl;
    }
};
int main()
{
    LibraryBooks l;
    l.input();
    l.fine();
    l.display();
    return 0;
}