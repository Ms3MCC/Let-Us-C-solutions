//star pattern using single loop

/*

#include<stdio.h>

int main()
{
    int i,j,k=0,flag=1;

    for(i=1;i<=7;i++)
    {
        if(i<4-k)
        {
            printf(" ");
        }
        else
        {
            if(flag==1)
            {
                printf("*");
                flag=1-flag;
            }
            else
            {
                 printf(" ");
                flag=1-flag;

            }
        }






         if(i==4+k)
         {
             k++;
             printf("\n");
             if(i==7)
             {
                 break;
             }
             i=0;
             flag=1;
         }

    }
}

*/


//general

#include<stdio.h>

int main()
{
    int i,j,k=0,flag=1;
    int x,y;
    printf("enter no of rows:");
    scanf("%d",&x);
     printf("enter no of columns:");
    scanf("%d",&y);


    for(i=1;i<=y;i++)
    {
        if(i<x-k)
        {
            printf(" ");
        }
        else
        {
            if(flag==1)
            {
                printf("*");
                flag=1-flag;
            }
            else
            {
                 printf(" ");
                flag=1-flag;

            }
        }






         if(i==x+k)
         {
             k++;
             printf("\n");
             if(i==y)
             {
                 break;
             }
             i=0;
             flag=1;
         }

    }
}


