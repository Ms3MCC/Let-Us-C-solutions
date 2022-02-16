//prime factors


/*
#include<stdio.h>

void factor(int);
int prime(int);

int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);
    factor(a);
}

void factor(int a)
{
    int i,fac,j,c;
    j=a;
    z:
    
    for(i=2;i<=a;i++)
    {
        if(j%i==0)
        {
            c=prime(i);
            if(c==1)
            {
              j/=i;
              goto z;

            }

           
            

        }

    }


}
int prime(int x)
{
    int i,j=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            j++;

        }
    }
    if(j==0)   //prime number
    {
        printf("%d,",x);
        return 1;

    }
    else
    {
        return 0;
    }

}

*/

#include<stdio.h>


void pfactor(int);

int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);

    printf("\n")
    pfactor(a);
    return 0;

}

void pfactor(int x)
{
    int i;

    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x/=i;   //primr factor due to this statement
        }
    }
  printf("\n");

}

