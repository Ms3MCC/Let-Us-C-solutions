//star pattern 4
#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
      
        for(j=1;j<=6-i;j++)//no of stars in i line
        {
            printf("*");
        }
       
           printf("\n");
    }

}