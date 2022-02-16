//star pattern 3



#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
      for(k=1;k<i;k++)
      {
          printf(" ");

      }
        for(j=1;j<=6-i;j++)//no of stars in i line
        {
            printf("*");
        }
       
           printf("\n");
    }

}