#include <iostream>
using namespace std;

int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

float total(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int total(int arr[], int size, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int a[] = {34,67,89,12,45};
    float b[] = {1.5f, 2.8f, 7.7f, 9.2f};

    cout << "Integer array total: "
         << total(a, 5) << endl;

    cout << "Float array total: "
         << total(b, 4) << endl;

    cout << "Total of first 3 integer elements: "
         << total(a, 5, 3) << endl;

    return 0;
}