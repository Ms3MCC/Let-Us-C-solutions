//CONVERT TEMP IN CELCIUS(centigrade)

#include<stdio.h>

int main()
{
    float f,c;
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&f);

    //celcius= (f-32)*5/9.0

    c=(f-32)*5/9;

    printf("\ntemp in celcius is:%f\n",c);

}