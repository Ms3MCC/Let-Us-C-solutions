// leap year check

#include<stdio.h>

int main()
{
    int y;

    printf("Enter year:");
    scanf("%d",&y);

    if(y%4==0 &&(y%100!=0||y%400==0))
    {
        printf("\n\nLEAP YEAR\n\n");
    }
    else
    {
        printf("Not leap Year");
    }
}