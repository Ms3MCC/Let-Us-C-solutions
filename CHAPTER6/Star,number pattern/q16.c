//star and/\ pattern

#include<stdio.h>

int main()
{
    int i,j;
    
    

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==i)
            {
                printf("\\");//due to escape sequence

            }
            else if(j==(8-i) && j!=4)
            {
                printf("/");
            }
            else
            {
                printf("*");

            }

        }
        printf("\n");
    }
}