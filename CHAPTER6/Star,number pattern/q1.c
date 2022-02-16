//star pattern 1



#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
       
        for(j=1;j<=i;j++)//no of stars in i line
        {
            printf("*");
        }
       
           printf("\n");
    }

}