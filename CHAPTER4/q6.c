#include<stdio.h>


int main()
{
    float h,cc,ts;
    float a,b,c;

    printf("Enter hardness:");
    scanf("%f",&h);

    printf("Enter carbon content:");
    scanf("%f",&cc);

    printf("Enter tensile strenght:");
    scanf("%f",&ts);

    a=50;
    b=0.7;
    c=5600;

    if((h>a) && (cc<b) && (ts>c))
    {
        printf("\nGRADE IS:10\n");
    }
    else if((h>a) && (cc<b) && (ts<c))
    {
        printf("\nGRADE IS:9\n");
    }
    else if((h<a) && (cc<b) && (ts>c))
    {
        printf("\nGRADE IS:8\n");
    }
    else if((h>a) && (cc>b) && (ts>c))
    {
        printf("\nGRADE IS:7\n");
    }
    else if((h>a) || (cc<b) || (ts>c))
    {
        printf("\nGRADE IS:6\n");
    }
    else
    {
         printf("\nGRADE IS:5\n");

    }

    return 0;





}