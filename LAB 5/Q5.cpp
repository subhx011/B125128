#include <iostream>
using namespace std;

void modify(int &a, int value)
{
    a = a + value;
}

void modify(float &a, float value)
{
    a = a + value;
}

void modify(int *a, int value)
{
    *a = *a + value;
}

int main()
{
    int a = 10;
    float b = 10.5f;
    int c = 20;

    cout << "Integer before: " << a << endl;
    modify(a, 5);
    cout << "Integer after: " << a << endl;

    cout << "\nFloat before: " << b << endl;
    modify(b, 2.5f);
    cout << "Float after: " << b << endl;

    cout << "\nPointer integer before: " << c << endl;
    modify(&c, 10);
    cout << "Pointer integer after: " << c << endl;

    return 0;
}