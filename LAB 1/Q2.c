#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float sal;

};
int main()
{
    struct Employee e[3];
    for (int i=0;i<=2;i++)
    {
    printf("Enter Employee ID");
    scanf("%d",&e[i].id);
    printf("Enter name");
    scanf("%s",&e[i].name);
    printf("Enter salary");
    scanf("%f",&e[i].sal);
    }
    
    for (int i=0;i<=2;i++)
    {
    printf("\nEmployee ID : %d\n",e[i].id);
    printf("Name : %s\n",e[i].name);
    printf("Salary : %f\n",e[i].sal);
    }
    return 0;
}