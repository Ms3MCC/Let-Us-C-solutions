// who is youngest

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nEnter Ram's age:");
    scanf("%d",&a);

    printf("\nEnter Shyam's age:");
    scanf("%d",&b);

    printf("\nEnter Ajay's age:");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("\n\nRam is youngest\n\n");

        }
        else
        {
            printf("\n\nAjay is youngest\n\n");

        }
    }

    else
    {
        if(b<c)
        {
            printf("\n\nShyam is youngest\n\n");

        }
         else
        {
            printf("\n\nAjay is youngest\n\n");

        }


    }
}