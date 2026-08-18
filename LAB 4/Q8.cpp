#include <iostream>
using namespace std;
class TrainSeat
{
private:
string name;
bool status;
int seatno;
public:
void accept()
{
    cout << "Enter seat number: ";
    cin >> seatno;
    cout << "Is the seat booked? (1 for Yes, 0 for No): ";
    cin >> status;
    if (status)
    {
        cout<<"Enter passenger name: ";
        cin>>name;
    }
}
friend class TicketChecker;
};
class TicketChecker
{
public:
void displaySeatDetails(TrainSeat t)
{
    cout << "Seat Number: " << t.seatno << endl;
    if (t.status)
    {
        cout << "Status: Booked" << endl;
        cout << "Passenger Name: " << t.name << endl;
    }
    else
    {
        cout << "Status: Available" << endl;
    }
}
};
int main()
{
    TrainSeat t;
    TicketChecker c;
    t.accept();
    c.displaySeatDetails(t);
    return 0;
}