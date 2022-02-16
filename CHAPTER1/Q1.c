// ramesh salary
#include<stdio.h>

int main()
{
    float sal,bsal,da,hra;

    printf("\nEnter your Basic salary:");
    scanf("%f",&bsal);



    da= 0.4*bsal;
    hra= 0.2*bsal;
    sal= bsal+da+hra;
    printf("\nDearness Allowance:%f\nHouse Rental Allowance:%f\n",da,hra);

    printf(" \nGross salary:%f \n",sal);

}