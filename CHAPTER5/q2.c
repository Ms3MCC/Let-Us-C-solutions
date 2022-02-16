//factorial

#include<stdio.h>

int main()
{
    int n,f;

    printf("\nEnter letter:");
    scanf("%d",&n);

    f=n;

    if(n==00)
    {
        printf("\nfactorial value:1\n");

    }

    else
    {
        while(n>1)
       {
        f=f*(n-1);
        n--;
       }

         printf("\nfactorial value:%d\n",f);


    }

    

  
}