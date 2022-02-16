//absolute value use modulus

#include<stdio.h>

int main()
{

    int a;
    printf("\nEnter number:");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("\n Absolute value is |%d|:%d\n\n",a,a);
    }
    else
    {
         printf("\n Absolute value is |%d|:%d\n\n",a,-a);

    }

}