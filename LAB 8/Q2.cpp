#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Parking fee calculation" << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10;

        if (hours > 5) {
            fee = fee * 0.90;
        }

        cout << "Two-wheeler parking fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30;

        if (hours > 5) {
            fee = fee * 0.90;
        }

        cout << "Four-wheeler parking fee: Rs. " << fee << endl;
    }
};

int main() {
    TwoWheelerSlot t;
    FourWheelerSlot f;

    t.calculateFee(6);
    f.calculateFee(6);

    return 0;
}