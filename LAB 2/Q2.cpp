#include <iostream>
using namespace std;
class Rectangle
{
float length,breadth,a,p;
public:
void dimension()
{
    cout<<"Enter length and breadth"<<endl;
    cin>>length>>breadth;
}
void area()
{
    a=length*breadth;
}
void perimeter()
{
    p=2*(length+breadth);
}
void display()
{
    cout<<"Area="<<a<<endl;
    cout<<"Perimeter="<<p<<endl;
}
};
int main()
{
    Rectangle r;
    r.dimension();
    r.area();
    r.perimeter();
    r.display();
    return 0;

}
