#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter number of rows"<<endl;
    cin>>m;
    cout<<"enter number of columns"<<endl;
    cin>>n;
    int **matrix=new int*[m];
    for (int i=0;i<m;i++)
    {
        matrix[i]=new int [n];
    }
    cout<<"enter matrix elements"<<endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"matrix elements"<<endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<m;i++)
    delete[] matrix[i];
    delete[] matrix;
    return 0;
}