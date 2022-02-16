//sin x

#include<stdio.h>
#include<math.h>

int fac(int);

void sinn(float,float*);

int main()
{
    float x,y,sinx=0;
    printf("\nEnter the  number:");
    scanf("%f",&x);
    y=x;

    x=3.14*x/180;

    sinn(x,&sinx);

    printf("\nsin(%.2f)=%.2f\n",y,sinx);




}

int fac(int a)
{
    int d,i;
    d=a;

    for(i=1;a>1;i++)
    {
        d=d*(a-1);
        a--;
    }
    return d;
}

void sinn(float x,float*y )
{
    int i;
    for(i=1;i<=10;i++)
    {
        *y=*y +(pow(-1,i+1))*(pow(x,2*i-1))/fac(2*i-1);

    }

}