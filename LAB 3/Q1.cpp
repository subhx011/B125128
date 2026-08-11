#include <iostream>
using namespace std;
int main()
{
int* ptr=new int;
cout<<"enter an integer";
cin>>*ptr;
cout<<"The value is "<<*ptr<<endl;
delete ptr;
ptr=nullptr;
return 0;

}