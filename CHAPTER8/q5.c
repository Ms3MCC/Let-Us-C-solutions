//leap year


#include<stdio.h>

void lyear(int);

int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);

    lyear(a);
}
void lyear(int a)
{
    if(a%4==0 && (a%!100=0 || a%400==0))
    {
        printf("\nIts a leap year");
    }
    else
    {
        printf("\nIts  not a leap year");
        
    }
}
