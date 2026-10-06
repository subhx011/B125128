#include <iostream>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string n, int id, int a) {
        patientName = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomCharges;
    int days;

public:
    InPatient(string n, int id, int a, double charges, int d)
        : Patient(n, id, a) {
        roomCharges = charges;
        days = d;
    }

    void displayBill() {
        double totalBill = roomCharges * days;

        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges Per Day: " << roomCharges << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Hospital Bill: " << totalBill << endl;
    }
};

int main() {
    InPatient p("Rahul", 101, 20, 2500, 5);
    p.displayBill();

    return 0;
}