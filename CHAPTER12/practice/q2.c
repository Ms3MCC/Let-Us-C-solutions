#include<stdio.h>
#include "q1.c"
# define PI 3.14
# define square(r) r*r;
# define country 'india'

int main()
{
    int a;
    float b,c;
    
    a=5;
    b=a*PI;
    c=square(b);

    printf("%f\n%f\n",b,c);

    yoyo();
    printf("\n");

    #if country == 'europe'
    {
        printf("pakistani rupees\n");

    }
        

    #elif country == 'bangladesh'
    {
        printf("bangladeshi rupees");

    }
        
    #else 
    {
          printf("Indian rupees");

    }
      
    #endif       





}
