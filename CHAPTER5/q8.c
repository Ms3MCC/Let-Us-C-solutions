//octal equivalent

#include<stdio.h>

int main()
{
    int a,b,c=0,d=0;

    printf("\nEnter the Number:");
    scanf("%d",&a);

    while(a>0)
    {
        c=c*10+a%8;
        a/=8;

    }
    while(c>0)
    {
        d=d*10+c%10;
        c/=10;

    }
    printf("\nOctal Equivalent:%d\n\n",d);
}