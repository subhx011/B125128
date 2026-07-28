#include <stdio.h>
struct Book
{
    int id;
    char title[50];
    char name[50];
    float price;

};
int main()
{
    struct Book b;

    printf("Enter book id");
    scanf("%d",&b.id);
    printf("Enter title");
    scanf("%s",&b.title);
    printf("Enter author name");
    scanf("%s",&b.name);
    printf("Enter price");
    scanf("%f",&b.price);

    printf("\nBook id. : %d\n",b.id);
    printf("Title : %s\n",b.title);
    printf("Author name : %s\n",b.name);
    printf("Price : %f\n",b.price);
    return 0;
}