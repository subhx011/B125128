#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int search(char arr[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int a[] = {12,78,90,87,67};
    char b[] = {'a', 'e', 'i', 'o', 'u'};
    int pos1 = search(a, 5, 30);
    if (pos1 != -1)
        cout << "Integer found at position: " << pos1 << endl;
    else
        cout << "Integer not found" << endl;
    int pos2 = search(b, 5, 'c');
    if (pos2 != -1)
        cout << "Character found at position: " << pos2 << endl;
    else
        cout << "Character not found" << endl;
    int pos3 = search(a, 1, 3, 40);
    if (pos3 != -1)
        cout << "Integer found in range at position: "
             << pos3 << endl;
    else
        cout << "Integer not found in range" << endl;

    return 0;
}