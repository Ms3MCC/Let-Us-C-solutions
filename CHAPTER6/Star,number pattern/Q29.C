//ALPHABET PATTERN


#include<stdio.h>

int main()
{
    int i,j,k;
    char x='A',y;
    x--;

    for(i=1;i<=5;i++)
    {
        x=x+i;
        y=x;
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",y);
            y--;

        }

        printf("\n");

    }

}