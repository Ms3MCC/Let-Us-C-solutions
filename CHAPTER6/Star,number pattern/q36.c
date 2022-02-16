//number pattern


#include<stdio.h>

int main()
{
    int i,j,k;

    
    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+i-1;


        }
        printf("\n");
    }
}