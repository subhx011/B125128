#include <iostream>
using namespace std;

int main() {
    int equipment[6] = {1,2,3,4,5,6};
    int *ptr = equipment;
    for (int i = 0; i < 6; i++) {
        cout << "Equipment id: " << *(ptr + i)<< "  Address: " << (ptr + i) << endl;
    }
    return 0;
}