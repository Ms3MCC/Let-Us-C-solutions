//sum of 5 digit number


/*
#include<stdio.h>

int main()
{
    int a,c,s=0;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a;

    s=s+a%10;
    a=a/10;   

    s=s+a%10;
    a=a/10;    

    s=s+a%10;
    a=a/10;    

    s=s+a%10;
    a=a/10;    

    s=s+a%10;
    a=a/10;    

    printf("\nSUM OF DIGITS OF %d IS %d\n",c,s) ;

    


}
*/




//sum of n digit number

#include<stdio.h>

int main()
{
    int a,c,s=0;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a;

    while(a>0)
    {

    s=s+a%10;
    a=a/10;

    }

    printf("\nSUM OF DIGITS OF %d IS %d\n",c,s) ;


}
