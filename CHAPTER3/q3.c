#include<stdio.h>

int main()
{
    int n;
    printf("enter year:");
    scanf("%d",&n);

    if(n%4==0 &&(n%100!=0||n%400==0))
    {
        printf("\n\nLEAP YEAR\n\n");
    }
    else
    {
        printf("\n\nNOT LEAP YEAR\n\n");

    }
}