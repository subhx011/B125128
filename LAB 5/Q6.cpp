#include <iostream>
using namespace std;

void display(int a)
{
    cout << "Integer: " << a << endl;
}

void display(float a)
{
    cout << "Float: " << a << endl;
}

void display(char a)
{
    cout << "Character: " << a << endl;
}

void display(int arr[], int size)
{
    cout << "Integer array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void display(char arr[], int size)
{
    cout << "Character array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int a = 10;
    float b = 15.5f;
    char c = 'A';

    int arr1[] = {34,78,54,23,90};
    char arr2[] = {'p','u','n','c','h'};

    display(a);
    display(b);
    display(c);
    display(arr1, 5);
    display(arr2, 5);

    return 0;
}