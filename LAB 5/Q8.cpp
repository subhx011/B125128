#include <iostream>
using namespace std;

int count(int n)
{
    if (n == 0)
        return 1;

    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int count(int arr[], int size)
{
    return size;
}

int count(char arr[], int size, char key)
{
    int c = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            c++;
    }

    return c;
}

int main()
{
    cout << "Number of digits: "
         << count(6578) << endl;

    int arr[] = {32,98,78,65,44};

    cout << "Number of array elements: "
         << count(arr, 5) << endl;

    char letters[] = {'a', 'p', 'a', 'a', 'a'};

    cout << "Occurrences of 'a': "
         << count(letters, 5, 'a') << endl;

    return 0;
}