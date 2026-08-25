#include <iostream>
using namespace std;

int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    cout << "Two integers: "
         << process(10, 20) << endl;

    cout << "Integer and float: "
         << process(10, 5.5f) << endl;

    cout << "Two floats: "
         << process(2.5f, 3.5f) << endl;

    int arr[] = {10, 20, 30, 40};

    cout << "Integer array sum: "
         << process(arr, 4) << endl;

    int a = 50;
    int b = 60;

    cout << "Two pointers: "<< process(&a, &b) << endl;

    return 0;
}