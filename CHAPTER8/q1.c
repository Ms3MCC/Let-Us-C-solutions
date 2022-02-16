//factorial through functions

#include<stdio.h>

int factorial(int);

int main()
{
    int a,c;

    printf("\nEnter the number:");
    scanf("%d",&a);
    c=factorial(a);
    printf("\nfactorial of %d id %d\n",a,c);


}

int  factorial(int x)
{
    int fac;
    fac=x;

    while(x>1)
    {
        fac=fac*(x-1);
        x--;
    }
    return fac;
}