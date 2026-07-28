#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float cgpa;

};
int main()
{
    struct Student s[5];
    
    for (int i=0;i<=4;i++)
    {
    printf("Enter roll no.");
    scanf("%d",&s[i].roll);
    printf("Enter name");
    scanf("%s",&s[i].name);
    printf("Enter cgpa");
    scanf("%f",&s[i].cgpa);
    }

    for (int i=0;i<=4;i++)
    {
        if (s[i].cgpa>8.0)
        {
            printf("\nRoll no. : %d\n",s[i].roll);
            printf("Name : %s\n",s[i].name);
            printf("CGPA : %f\n",s[i].cgpa);
        }
    }
    return 0;
}