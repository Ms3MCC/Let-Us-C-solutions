//number pattern


#include<stdio.h>

int main()
{
    int i,j,k,m,n;

    for(i=1;i<=21;i++)
    {
        if(i<=11)
        {
            n=i-1;
            if(n==10)
            {
                n=0;
            }
            m=1+2*(i-1);
            for(k=1;k<=11-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=m;j++)
            {
                if(j<i)
                {
                    printf("%d",n);
                    n++;
                     if(n==10)
                     {
                       n=0;
                     }
                    
                    

                }
                else if(j==i)
                {
                    printf("%d",n);
                    
                }

                else
                {
                    if(n==0)
                    {
                        n=10;
                    }
                    n--;
                    printf("%d",n);

                }
              

            }

        }
        else
        {
            n=21-i;
            if(n==10)
            {
                n=0;
            }
            m=41-2*(i-1);
            for(k=1;k<=i-11;k++)
            {
                printf(" ");
            }

             for(j=1;j<=m;j++)
            {
                if(j<i)
                {
                    printf("%d",n);
                    n++;
                     if(n==10)
                     {
                       n=0;
                     }
                    
                    

                }
                else if(j==i)
                {
                    printf("%d",n);
                    
                }

                else
                {
                    if(n==0)
                    {
                        n=10;
                    }
                    n--;
                    printf("%d",n);

                }
                
            }

        }
        printf("\n");
    

    }
}