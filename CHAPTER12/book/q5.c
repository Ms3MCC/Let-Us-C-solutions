#include<stdio.h>

#include "interest.h"


int main()
{
    float p,r,t,amount,si;

    printf("\nEnter the Principle Amount:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
    si=si(p,r,t);
    printf("\nSimple Interest is:%.2f\n",si);

    amount=am(p,si);
    printf("Total Amount to be paid:%.2f\n",amount);

}