//is it a traingle or not

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nEnter angle a:");
    scanf("%d",&a);

    printf("\nEnter angle b:");
    scanf("%d",&b);

    printf("\nEnter angle c:");
    scanf("%d",&c);

    if(a+b+c==180)
    {
        printf("\n\nTriangle is Valid\n\n");
    }
    else
    {
        printf("\n\nTriangle is not Valid\n\n");

    }



}