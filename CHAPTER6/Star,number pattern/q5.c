// star pattern 5


#include<stdio.h>

int main()
{
    int i,j,k,m;

    for(i=1;i<=5;i++)
    {
        m=2*(i-1)+1;
        for(k=1;k<=5-i;k++)
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