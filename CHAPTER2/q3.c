//Area of triangle

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,s,a2;
    float area;

    printf("Enter lenght of first side:");
    scanf("%d",&a);

    printf("Enter lenght of second side:");
    scanf("%d",&b);

    printf("Enter lenght of third side:");
    scanf("%d",&c);

    s=(a+b+c)/2;

    a2=s*(s-a)*(s-b)*(s-c);

    area=sqrt(a2);//heron's formula

    printf("\narea of triangle:%.1f\n\n",area);

    return 0;




}