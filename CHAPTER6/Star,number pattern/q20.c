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

        for(j=1;j<=2+2*(i-1);j++)
        {
            if(j<=i)
            {
                printf("%c",x);
                x++;
            }
            

            else
            {
                
                printf("%d",m);
                m++;

              
            }

        }
        printf("\n");


    }
}