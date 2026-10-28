#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving" << endl;
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 2.0;

        cout << "Wheeled robot travel time: " << time << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 1.2;

        cout << "Tracked robot travel time: " << time << " seconds" << endl;
    }
};

int main() {
    WheeledRobot w;
    TrackedRobot t;

    Robot *ptr;

    ptr = &w;
    ptr->move(12);

    ptr = &t;
    ptr->move(12);

    return 0;
}