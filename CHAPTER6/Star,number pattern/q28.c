//number star pattern

#include<stdio.h>

int main()
{
    int i,j,k=0,p;

    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            k=k+1;
        }
        else
        {
            k--;
            k=k+i;
        }
        p=k;
        for(j=1;j<=1+2*(i-1);j++)
        {
            if(j%2==0)
            {
                printf("*");
            }
            else
            {
                printf("%d",p);
                {
                    if(i%2==1)
                    {
                        k++;
                        p++;
                    }
                    else
                    {
                        p--;
                    }
                }
            }
        }
        printf("\n");
    }
}