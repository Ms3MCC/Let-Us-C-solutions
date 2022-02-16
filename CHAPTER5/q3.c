//raising power

#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    d=b;

    c=1;
    while(b>0)
    {
        c=c*a;
        b--;
    }

    printf("\n%d raised to power %d is: %d\n",a,d,c);
    return 0;

}