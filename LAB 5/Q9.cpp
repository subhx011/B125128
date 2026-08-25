#include <iostream>
using namespace std;

int maximum(int a, int b)
{
   if (a>b)
   return a;
   else 
   return b;
}

int maximum(int *a, int *b)
{
    if (*a > *b)
    return *a;
    else 
    return *b;
}
int maximum(int *arr, int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Maximum of two integers: "
         << maximum(a, b) << endl;

    cout << "Maximum using pointers: "
         << maximum(&a, &b) << endl;

    int arr[] = {10, 50, 20, 80, 30};

    cout << "Maximum in array: "
         << maximum(arr, 5) << endl;

    return 0;
}