//pattern star





#include<stdio.h>

int main()
{
    int i,j,k,m;

    for(i=1;i<=7;i++)
    {
        
        if(i<=4)
        {
            m=1+2*(i-1);//ap
           

            for(j=1;j<=i;j++)
            {
                printf("*");
            }
        }
        else
        {
            
            for(j=1;j<=8-i;j++)
            {
                printf("*");
            }
        }
        printf("\n");

        

    }
}