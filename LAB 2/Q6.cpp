#include <iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    void input()
    {
        cout<<"Enter two distance:"<<endl;
        cin>>feet>>inches;
    }
    void sum(Distance d1,Distance d2)
    {
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
    if (inches>12)
    {
        feet++;
        inches-=12;
    }
    }
    void display()
    {
        cout<<feet<<"feet"<<inches<<"inches"<<endl;
    }
};
int main()
{
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.sum(d1,d2);
    d3.display();
    return 0;

}