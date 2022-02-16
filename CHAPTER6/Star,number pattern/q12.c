//star pattern



#include<stdio.h>

int main()
{
    int i,j,k,m;

    for(i=1;i<=4;i++)
    {
        m=7-2*(i-1);
        for(k=1;k<i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=m;j++)
        {
            printf("*");

        }

        
      
        printf("\n");

        

    }
}