#include <iostream>
using namespace std;

int larger(int a, int b)
{
    if (a>b)
    return a;
    else
    return b; 
}

float larger(float a, float b)
{
   if (a>b)
    return a;
    else
    return b; 
}

int larger(int a, int b, int c)
{
   if(a>b && a>c)
   return a;
   else if (b>a && b>c)
   return b;
   else
   return c; 
}

int main()
{
    cout << "Larger of two integers: "
         << larger(10, 25) << endl;

    cout << "Larger of two floats: "
         << larger(12.5f, 10.8f) << endl;

    cout << "Larger of three integers: "
         << larger(10, 50, 30) << endl;

    return 0;
}