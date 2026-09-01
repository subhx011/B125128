#include <iostream>
using namespace std;

void Longest(int *duration, int n) {
    int longest = *duration;

    for (int i = 1; i < n; i++) {
        if (*(duration + i) > longest) {
            longest = *(duration + i);
        }
    }
    cout << "Longest Episode Duration: "
         << longest << " minutes" << endl;
}
int main() {
    int duration[6] = {76,99,56,22,21,34};
    Longest(duration, 6);
    return 0;
}