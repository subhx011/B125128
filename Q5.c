#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;

};
int main()
{
    int area,perimeter;
    struct Rectangle s;

    printf("Enter length");
    scanf("%d",&s.length);
    printf("Enter breadth");
    scanf("%d",&s.breadth);

    area=s.length*s.breadth;
    perimeter=2*(s.length+s.breadth);

    printf("\nArea: %d\n",area);
    printf("perimeter : %d\n",perimeter);
    return 0;
}