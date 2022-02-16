//alphabet pattern

#include<stdio.h>

int main()
{
    int i,j;
    char x;

    for(i=1;i<=4;i++)
    {
        x='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i ||j>=3+i)
            {
                printf("%c",x);
                x++;

            }
            else
            {
                printf(" ");
                x++;
            }

        }
        printf("\n");
    }
}