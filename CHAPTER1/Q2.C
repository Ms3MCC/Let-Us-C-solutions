//CONVERT DISTANCE IN METRE,FEET,INCHAND CENTIMETRE

#include<stdio.h>

int main()
{
    float kmd,md,fd,id,cd;

    printf("Enter distance between two cities in km:");
    scanf("%f",&kmd);

    md=kmd*1000;             //1km=1000 m
    cd=kmd*100000;          // 1m=100cm
    fd=kmd*3280.84;        //  1km=3280.84 feet
    id=kmd*39370.079;     //   1km=39370.079 inch, 1feet=12 inch

    printf("\nIn Meters:%f\nIn Feets:%f\nIn Inches:%f\nIn Centimeters:%f\n",md,fd,id,cd);


}