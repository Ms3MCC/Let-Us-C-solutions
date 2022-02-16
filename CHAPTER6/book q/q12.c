//pattern

#include<stdio.h>

int main()
{
    int i,j,a,k,m;
    a=1;
    m=4;

    for(i=1;i<=4;i++)
    {
        printf("\n");

        for(k=1;k<=m;k++)
        {
            printf("  ");
        }
         m--;
       
        for(j=1;j<=i;j++)
        {
          
            printf("%d",a);
            printf("   ");
            a++;

        }
       

    }
    printf("\n\n");
}