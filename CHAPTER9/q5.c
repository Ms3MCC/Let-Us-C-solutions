//area of triangle


#include<stdio.h>
#include<math.h>

void area(float,float,float,float*);



int main()
{
    
  float a,b,c,ar;

    printf("\nEnter the First side:");
    scanf("%f",&a);

    printf("\nEnter the Second side:");
    scanf("%f",&b);

    printf("\nEnter the Third side:");
    scanf("%f",&c);

    area(a,b,c,&ar);

    printf("Area of triangle is %.2f\n",ar);

    return 0;





}

void area(float a,float b,float c,float*j)
{
    float s,sqarea;
    s=(a+b+c)/2;

    sqarea=s*(s-a)*(s-b)*(s-c);
    *j=sqrt(sqarea);


}

