
#include<stdio.h>
#include "areaperi.h"

int main()
{
    int a,b,c;
    int s,r;

    printf("\nTRIANGLE\n");

    printf("\nEnter first side of Triangle:");
    scanf("%d",&a);
    printf("\nEnter second side of Triangle:");
    scanf("%d",&b);
    printf("\nEnter third side of Triangle:");
    scanf("%d",&c);
    triangle(a,b,c)


    printf("\nSqaure\n");

    printf("\nEnter  side of Sqaure:");
    scanf("%d",&s);
    sqaure(s)


    printf("\nCircle\n");

    printf("\nEnter  radius of Circle:");
    scanf("%d",&r);
    circle(r)
}