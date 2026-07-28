#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float sal;

};
int main()
{
    struct Employee e[5];
    for (int i=0;i<=4;i++)
    {
    printf("Enter Employee ID");
    scanf("%d",&e[i].id);
    printf("Enter name");
    scanf("%s",&e[i].name);
    printf("Enter salary");
    scanf("%f",&e[i].sal);
    }
    int max=0;
    for (int i=0;i<=4;i++)
    {
        if (e[i].sal>e[max].sal)
        max=i;
    }
    printf("\nEmployee ID : %d\n",e[max].id);
    printf("Name : %s\n",e[max].name);
    printf("Salary : %f\n",e[max].sal);
    return 0;
}