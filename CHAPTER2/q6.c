//wind chill factor

#include<stdio.h>
#include<math.h>

int main()
{
    float t,v,wcf;

    printf("\nt:"); //temperature
    scanf("%f",&t);

    printf("v:"); //wind velocity
    scanf("%f",&v);

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);

    printf("\n\nWind chill factor:%.2f\n\n",wcf);




}