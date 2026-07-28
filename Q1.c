#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int age;
    float cgpa;

};
int main()
{
    struct Student s;

    printf("Enter roll no.");
    scanf("%d",&s.roll);
    printf("Enter name");
    scanf("%s",&s.name);
    printf("Enter age");
    scanf("%d",&s.age);
    printf("Enter cgpa");
    scanf("%f",&s.cgpa);

    printf("\nRoll no. : %d\n",s.roll);
    printf("Name : %s\n",s.name);
    printf("Age : %d\n",s.age);
    printf("CGPA : %f\n",s.cgpa);
    return 0;
}