// BMI

#include<stdio.h>

int main()
{
    float wt,ht,bmi;

    printf("\nEnter your Weight(in Kg): ");
    scanf("%f",&wt);
    printf("\nEnter your Height(in Meters): ");
    scanf("%f",&ht);

    bmi=wt/(ht*ht);
    printf("\nYOUR BMI IS:%.1f\n",bmi);

    if(bmi>=40)
    {
        printf("\nYOU ARE MORBIDLY OBESE\n");
    }
     else if(bmi>=30 && bmi<=30.9)
    {
        printf("\nYOU ARE OBESE\n");
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("\nYOU ARE OVERWEIGHT\n");
    }
    else if(bmi>=18.6 && bmi<=24.4)
    {
        printf("\nYOU BMI IS IDEAL\n");
    }
    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("\nYOU ARE UNDERWEIGHT\n");
    }
     else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("\nYOU ARE ANOREXIC\n");
    }
    else if(bmi<=15)
    {
        printf("\nYOU ARE STARVING\n");
    }




}