#include <iostream>
using namespace std;

int compare(int a, int b)
{
    if (a>b)
    return a;
    if (b>a)
    return b;
}

float compare(float a, float b)
{
    if (a>b)
    return a;
    if (b>a)
    return b;
}

bool compare(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    cout << "Larger integer: "
         << compare(20, 30) << endl;

    cout << "Larger float: "
         << compare(12.5f, 15.5f) << endl;

    int a[] = {10, 20, 30};
    int b[] = {10, 20, 30};

    if (compare(a, b, 3))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are not identical." << endl;

    return 0;
}