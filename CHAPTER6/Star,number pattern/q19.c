//alphabet pattern

#include<stdio.h>

int main()
{
    int i,j,k;
    char x;

    for(i=1;i<=4;i++)
    {
        x='A';
        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=1+2*(i-1);j++)
        {
            if(j<i)
            {
                printf("%c",x);
                x++;
            }
            else if(j==i)
            {
                printf("%c",x);
            }

            else
            {
                x--;
                printf("%c",x);

              
            }

        }
        printf("\n");


    }
}