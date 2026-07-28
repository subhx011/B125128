#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int cmarks;
    int mmarks;
    int pmarks;

};
int main()
{
    float tmarks,avg;
    struct Student s;

    printf("Enter roll no.");
    scanf("%d",&s.roll);
    printf("Enter name");
    scanf("%s",&s.name);
    printf("Enter marks in c");
    scanf("%d",&s.cmarks);
    printf("Enter marks in maths");
    scanf("%d",&s.mmarks);
    printf("Enter marks in physics");
    scanf("%d",&s.pmarks);

    tmarks=s.cmarks+s.mmarks+s.pmarks;
    avg=(s.cmarks+s.mmarks+s.pmarks)/3;

    printf("\nTotal marks=%f\n",tmarks);
    printf("Average=%f",avg);

    
    return 0;
}