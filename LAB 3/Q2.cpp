#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter size of array"<<endl;
cin>>n;
int* arr=new int[n];
cout<<"enter the lements of array"<<endl;
for (int i=0;i<n;i++)
{cin>>arr[i];}
cout<<"The elements of array are "<<endl;
for (int i=0;i<n;i++)
{cout<<arr[i]<<"   ";}
delete[] arr;
return 0;

}