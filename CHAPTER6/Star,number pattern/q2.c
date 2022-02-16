//star pattern 2



#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }
       
        for(j=1;j<=i;j++)//no of stars in i line
        {
            printf("*");
        }
       
           printf("\n");
    }

}