// sum of first 25 numbers by recurssion

#include<stdio.h>

int add(int);

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    printf("Sum of first %d natural numbers is:%d\n",a,add(a));

    return 0;

}

int add(int a)
{
    int sum=0;
    if(a==1)
    {
        return 1;
    }
    else
    {
        sum=a+add(a-1);

    }

    return sum;

}