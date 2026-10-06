#include <iostream>
using namespace std;
class Vehicle
{
    protected:
    string reg;
    int days;

    public:
    Vehicle(string r,int d)
    {
        reg=r;
        days=d;
    }
};
class Car : public Vehicle
{
    protected:
    int rate;
    
    public:
    Car(string r,int d,int rt):Vehicle (r,d)
    {
        rate=rt;
    }
};

class LuxuryCar: public Car
{
    private:
    int luxc;

    public:
    LuxuryCar(string r,int d,int rt,int l):Car(r,d,rt)
    {
        luxc=l;
    }

    void display()
    {
        int totalcost=(rate+luxc)*days;
        cout<<"Registratio number:"<<reg<<endl;
        cout<<"Number of days:"<<days<<endl;
        cout<<"Daily rental rate:"<<rate<<endl;
        cout<<"Additional luxury charges:"<<luxc<<endl;
        cout<<"Total cost="<<totalcost<<endl;
    }
    
};
int main()
{
    LuxuryCar s("OD332190",2,23,89);
    s.display();
    return 0;
}