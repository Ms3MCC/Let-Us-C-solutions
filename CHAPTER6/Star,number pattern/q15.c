//number  pattern


#include<stdio.h>

int main()
{
    int i,j,k,m;
    for(i=1;i<=9;i++)
    {
       m=1;
        if(i<=5)
        {
            
            for(k=1;k<=5-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d",m);
                m++;
            }
        }

        else
        {
            for(k=1;k<=i-5;k++)
            {
                printf(" ");

            }
             for(j=1;j<=10-i;j++)
             {
                printf("%d",m);
                m++;

             }

        }
        printf("\n");

    }
}