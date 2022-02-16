
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int x,y;
    printf("Enter no of rows:");
    scanf("%d",&x);
    printf("Enter no of columns:");
    scanf("%d",&y);

    int **b=(int**)malloc(sizeof(int*)*x); // allocating memory to rows

    for(int i=0;i<x;i++)                // allocating memory to columns 
    {
        b[i]=(int*)malloc(sizeof(int)*y);
    }

    for(int i=0;i<x;i++)                       // scanning value
    {
        for(int j=0;j<y;j++)
        {
             printf("Value at Index [%d][%d]:",i,j);
             scanf("%d",&b[i][j]);

        }

       
    }


    for(int i=0;i<x;i++)
    {
         printf("\n");
        for(int j=0;j<y;j++)
        {
           if(b[i][j]>=10)
             {
                  printf(" %d  ",b[i][j]);
                 
                 
             }
             else
             {
                 printf("  %d  ",b[i][j]);
                 
             }
            
        }
        
    }

    






}