//circulary shift values


#include<stdio.h>

void cirshift(int*,int*,int*);

int main()
{
    int a,b,c;

    printf("\nEnter the First number:");
    scanf("%d",&a);

    printf("\nEnter the Second number:");
    scanf("%d",&b);

    printf("\nEnter the Third number:");
    scanf("%d",&c);

    cirshift(&a,&b,&c);

    printf("\na:%d\nb:%d\nc:%d\n",a,b,c);

    return 0;


}

void cirshift(int*x,int*y,int*z)
{
    int d;
    d=*z;
    *z=*y;
    *y=*x;
    *x=d;

}