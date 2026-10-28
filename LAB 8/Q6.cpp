#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for threats" << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = threats - (threats * 90 / 100);

        cout << "Threats detected: " << threats << endl;
        cout << "Threats remaining: " << remaining << endl;
    }
};

int main() {
    BasicScanner b;
    AdvancedScanner a;

    b.scan(100);
    a.scan(100);

    return 0;
}