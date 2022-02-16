//star pattern 



#include<stdio.h>

int main()
{
    int i,j,k,m;

    for(i=1;i<=5;i++)
    {
        m=9-2*(i-1);
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
       
        for(j=1;j<=m;j++)//no of stars in i line
        {
            printf("*");
        }
       
           printf("\n");
    }

}

