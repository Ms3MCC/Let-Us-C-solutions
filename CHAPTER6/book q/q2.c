//adding seven terms

#include<stdio.h>

int main()
{
    int i,a,n;
    float sum=0;

    for(i=1;i<=7;i++)
    {
       a=n=i;
        while(n>1)
        {
            a=a*(n-1);
            n--;
            
        }

        printf("\n%d/%d:%f",i,a,(float)i/a);

        sum=sum+(float)i/a;
        
    }

    printf("\nSUM:%f\n",sum);
}