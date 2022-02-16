//power(a,b)

#include<stdio.h>

int power(int,int);

int main()
{
    int a,b,c;



    printf("\nEnter the First number:");
    scanf("%d",&a);

    printf("\nEnter the Second number:");
    scanf("%d",&b);

    c=power(a,b);

    printf("\n%d raise to power %d is %d\n",a,b,c);



   
}
int power(int a,int b)
{
    int i,c=1;
    for(i=1;i<=b;i++)
    {
        c=c*a;

    }
    return c;
}