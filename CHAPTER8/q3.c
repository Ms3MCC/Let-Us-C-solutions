//Roman equivalent

/*

#include<stdio.h>

void roman(int);

int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    
    roman(a);
    printf("\n");
    
}

void roman(int a)
{
    while(a>1000)
    {
        printf("m");
        a-=1000;
    }
    if(a>500)
    {
         printf("d");
        a-=500;

    }
     while(a>100)
    {
        printf("c");
        a-=100;
    }
    if(a>50)
    {
         printf("l");
        a-=50;

    }
     while(a>10)
    {
        printf("x");
        a-=10;
    }
    if(a>5)
    {
         printf("v");
        a-=5;

    }
     while(a>1)
    {
        printf("i");
        a-=1;
    }


    
}

*/

#include<stdio.h>

void roman(int);

int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    
    roman(a);
    printf("\n");
    
}

void roman(int a)
{
    while(a>0)
    {
        if(a>=1000)
        {
            
            printf("m");
            a-=1000;
        }
        else if(a>=500)
        {
            printf("d");
            a-=500;

        }
        else if(a>=100)
        {
            printf("c");
            a-=100;

        }
        else if(a>=50)
        {
            printf("l");
            a-=50;

        }
        else if(a>=10)
        {
            printf("x");
            a-=10;

        }
        else if(a>=5)
        {
            printf("v");
            a-=5;

        }
        else if(a>=1)
        {
            printf("i");
            a-=1;

        }
    }


    
}