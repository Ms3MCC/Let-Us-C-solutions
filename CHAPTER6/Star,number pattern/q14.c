//number pattern


#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=8-i;j++)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
}