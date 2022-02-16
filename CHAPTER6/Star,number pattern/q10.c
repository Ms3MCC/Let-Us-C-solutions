//diamond star system

#include<stdio.h>

int main()
{
    int i,j,k,m;

    for(i=1;i<=7;i++)
    {
        
        if(i<=4)
        {
            m=1+2*(i-1);//ap
            for(k=1;k<=4-i;k++)
            {
                printf(" ");
            }

            for(j=1;j<=m;j++)
            {
                printf("*");
            }
        }
        else
        {
            m=5-2*(i-5);//ap
            for(k=1;k<=i-4;k++)
            {
                 printf(" ");
            }
            for(j=1;j<=m;j++)
            {
                printf("*");
            }
        }
        printf("\n");

        

    }
}