#include <stdio.h>
struct Distance
{
    int feet;
    int inches;

};
int main()
{
    struct Distance d1,d2,sum;

    printf("Enter distance 1 ");
    scanf("%d %d",&d1.feet,&d1.inches);
    printf("Enter distance 2 ");
    scanf("%d %d",&d2.feet,&d2.inches);
    sum.feet=d1.feet+d2.feet;
    sum.inches=d1.inches+d2.inches;

    printf("\nTotal distance :%dfeet %dinches\n",sum.feet,sum.inches);
    
    return 0;
}
