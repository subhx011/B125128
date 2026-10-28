#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water requirement" << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2 * (100 - moisture);

        cout << "Drip irrigation water: " << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3 * (100 - moisture);

        cout << "Sprinkler irrigation water: " << water << " litres" << endl;
    }
};

int main() {
    DripIrrigation d;
    SprinklerIrrigation s;

    d.calculateWater(40);
    s.calculateWater(40);

    return 0;
}