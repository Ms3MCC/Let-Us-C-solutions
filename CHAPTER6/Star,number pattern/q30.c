//star pattern

/*

#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=9;i++)
    {

        if(i<=3)
        {
            for(k=1;k<=5-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }

        }
        else if(i>=7)
        {
             for(j=1;j<=10-i;j++)
            {
                printf("*");
            }

        }
       else if(i>=4 && i<=6)
       {
           for(j=1;j<=5;j++)
           {
               if(j==3)
               {
                   printf("|");
               }
               else if((i==4 &&(j==4||j==5))||(i==5&&(j==5||j==1))||(i==6&&(j==1||j==2)))
               {
                   printf("*");

               }
               else
               {
                   printf(" ");
               }
           }

       }

        printf("\n");
    }
}

*/

//same pattern from n

#include<stdio.h>

int main()
{
    int  i,j,n,k;

    printf("Enter value of n:");
    scanf("%d",&n);

    for(i=1;i<=3*n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i<=n)
            {
                if(j>=2*n-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            else if(i<=2*n)
            {
                k=0;
                if(j==n)
                {
                    printf("|");
                    k=1;
                }
                if(j<=i-n-1)
                {
                    printf("*");
                    k=1;
                }
                if(j>=i)
                {
                      printf("*");
                      k=1;
                }
                if(k==0)
                {
                    printf(" ");
                }


            }
            else if(i<=3*n)
            {
                if(j<=3*n+1-i)
                {
                    printf("*");
                }

            }
        }
        printf("\n");
    }
}