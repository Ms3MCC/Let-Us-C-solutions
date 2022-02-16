// natural logarithm

#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float x, sum=0,po;

    printf("Enter the number:");
    scanf("%f",&x);
    sum=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        po=pow((x-1)/x,i);
        printf("\n%f\n",po);
        sum=sum+0.5*po;
    }

    printf("Natural log of %.2f: %f\n",x,sum);
}