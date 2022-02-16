#include<stdio.h>

#define am(a,b) (a+b)/2.0

#define ab(a)   a>=0?a:-a

#define uplc(c) c+32

#define big(a,b,c)  (a>b)?(a>c?a:c):(b>c?b:c)


int main()
{
    int a,b,d,e;
    float c;
    char x;
    printf("1)\narithmetic mean of two numbers\n");

    printf("\nEnter the First Number:");
    scanf("%d",&a);
    printf("\nEnter the second Number:");
    scanf("%d",&b);
    c=am(a,b);
    printf("\nArithmetic mean is:%.2f\n",c);

    printf("2)\nTo Finid Absolute value\n");

    printf("\nEnter the  Number:");
    scanf("%d",&a);

    d=ab(a);
    printf("Absolute value is %d\n",d);



    printf("3)\nTo convert Upper Case To Lower Case\n");

    printf("\nEnter the  UpperCase Alphabet:");
    scanf(" %c",&x);

    x=uplc(x);

    printf("Converting in lower case:%c\n",x);

       
    
    printf("4)\nTo obtain the biggest of three numbers\n");

    printf("\nEnter the First Number:");
    scanf("%d",&a);
    printf("\nEnter the second Number:");
    scanf("%d",&b);
    printf("\nEnter the Third Number:");
    scanf("%d",&d);

    e=big(a,b,d);

    printf("Biggest of three is %d\n",e);







}
