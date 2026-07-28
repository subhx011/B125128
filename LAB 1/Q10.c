#include <stdio.h>
struct Date
{
    int day;
    int month;
    int  year;
};
struct Student
{
    int roll;
    char name[50];
    struct Date dob;
};

int main()
{
    struct Student s;
    printf("Enter roll no.");
    scanf("%d",&s.roll);
    printf("Enter name");
    scanf("%s",s.name);
    printf("Enter dob");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);

    printf("\nRoll no:%d\n",s.roll);
    printf("Name:%s\n",s.name);
    printf("Date of birth:%d-%d-%d\n",s.dob.day,s.dob.month,s.dob.year);
    return 0;
}