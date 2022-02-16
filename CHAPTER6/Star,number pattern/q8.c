//number pattern


#include<stdio.h>

int main()
{
    int i,j,k,m,n;

    for(i=1;i<=4;i++)
    {
        n=i;
        m=1+2*(i-1);
        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=m;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                n--;
                printf("%d",n);
            }
        }
        printf("\n");
    }
}