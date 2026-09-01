#include <iostream>
using namespace std;
void addMarks(int *ptr, int n) {
    for (int i = 0; i < n; i++)
    *(ptr + i) = *(ptr + i) + 5;
}
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[50];
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++) 
        cin >> *(marks + i);
    cout << "Marks before modification: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";}
    addMarks(marks, n);
    cout << "\nMarks after modification: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    return 0;
}
