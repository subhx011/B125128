#include <iostream>
using namespace std;

int main() {
    int level = 100;
    int *ptr = &level;
    cout << "Current level: " << *ptr << endl;
    *ptr = *ptr + 20;
    *ptr = *ptr - 30;
    cout << "Updated level: " << *ptr << endl;
    return 0;
}