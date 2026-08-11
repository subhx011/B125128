#include <iostream>
using namespace std;
int main()
{
int n;
float sum=0,avg;
cout<<"enter size of array"<<endl;
cin>>n;
float* arr=new float[n];
cout<<"enter the lements of array"<<endl;
for (int i=0;i<n;i++)
{cin>>arr[i];}
for (int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
avg=sum/n;
cout<<"Sum="<<sum<<endl;
cout<<"Average="<<avg<<endl;
delete[] arr;
return 0;

}