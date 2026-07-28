#include <stdio.h>
struct Product
{
    int id;
    char name[50];
    float price;
    int qty;

};
int main()
{
    int tcost;
    struct Product b;

    printf("Enter product id");
    scanf("%d",&b.id);
    printf("Enter product name");
    scanf("%s",&b.name);
    printf("Enter price");
    scanf("%f",&b.price);
    printf("enter quantity");
    scanf("%d",&b.qty);
    tcost=b.price*b.qty;

    printf("\nTotal cost : %d\n",tcost);
    return 0;
}