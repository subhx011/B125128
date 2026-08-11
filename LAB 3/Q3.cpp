#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int* arr=new int[n];
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    int largest=*arr;
    for (int i=0;i<n;i++)
    {
        if (*(arr+i)>largest)
        largest=*(arr+i);
    }
    cout<<"Largest value is "<<largest<<endl;
   
    delete[] arr;
     return 0;
}