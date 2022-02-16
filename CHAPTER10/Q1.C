//sum of digits


#include<stdio.h>

void addd(int);
int raddd(int);




int main()
{
    int a,sum;

    printf("\nEnter a number:");
    scanf("%d",&a);

    addd(a);
    sum=raddd(a);

    printf("\nwith recussion answer is %d\n",sum);

    return 0;

}

void addd(int a)
{
    int sum=0;
    while(a>0)
    {
        sum=sum+a%10;
        a/=10;

    }
    printf("\nwithout recussion answer is %d\n",sum);
}

int raddd(int a)
{
    int sum=0;
    if(a==0)
    {
        return 0;
    }
    else
    {
        sum=a%10+raddd(a/10);

    }

    return sum;

    
}


