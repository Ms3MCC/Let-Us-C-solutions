//is area greater than perimeter

#include<stdio.h>

int main()
{
    int l,b,ar,peri;

    printf("\n\nEnter lenght:");
    scanf("%d",&l);

    printf("Enter breadth:");
    scanf("%d",&b);

    ar=l*b;

    peri=2*(l+b);

    if(ar>peri)
    {
        printf("\n\nArea is greater than the perimeter\n\n");
    }
    else if(ar<peri)
    {
         printf("\n\nArea is less than the perimeter\n\n");

    }
    else
    {
        printf("\n\nArea = perimeter\n\n");
    }



}