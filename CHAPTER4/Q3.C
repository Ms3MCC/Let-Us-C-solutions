// triangle is valid or not (sum of two sides must be greater than third)

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nFirst side:");
    scanf("%d",&a);

    printf("\nSecond side:");
    scanf("%d",&b);

    printf("\nThird side:");
    scanf("%d",&c);

    if( (c<(a+b)) && (a<(b+c)) && (b<(a+c)) )
    {
        printf("It's a Valid Triangle\n");
    }
    else
    {
        printf("It's Not a Valid Triangle\n");

    }

}