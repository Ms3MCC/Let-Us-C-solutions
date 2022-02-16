//alphabet + number pattern

#include<stdio.h>

int main()
{
    int i,j,k,m;
    char x;

    for(i=1;i<=4;i++)
    {
        x='A';
        m=1;
        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=1+2*(i-1);j++)
        {
            if(j<=i)
            {
                printf("%d",m);
                m++;
            }
            

            else
            {
                
                printf("%c",x);
                x++;

              
            }

        }
        printf("\n");


    }
}