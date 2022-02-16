//number alphabet pattern


#include<stdio.h>

int main()
{
    int i,j,k,n;
    char x;

    for(i=1;i<=4;i++)
    {
        x='A';
        n=1;

        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c",x);
                printf(" ");
                x++;
            }
            else
            {
                printf("%d",n);
                printf(" ");
                n++;
            }
        }
        printf("\n");
    }
}