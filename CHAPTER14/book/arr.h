#include<stdio.h>
#include<stdlib.h>


// for dynamic arrays
void darrin(int** p,int x,int y)
{
     int k=1;
    printf("\nPlease input the value of Matrix of dimension %dx%d\n",x,y);

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf(" %d)Value at index [%d][%d]:",k,i,j);
            scanf("%d",&p[i][j]);
            k++;
        }
    }
}

void darrout(int **b, int x,int y)
{
   
    printf("\n\n");
    printf("-------Matrix----------------\n");
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

    printf("\n\n\n");


}


void ddim(int *x,int *y)
{
    printf("\n\nEnter the number of rows of the Matrix:");
    scanf("%d",x);
    printf("Enter the number of columns of the Matrix:");
    scanf("%d",y);


}


// for static array
void arrin(int x,int y,int p[][y])
{
    printf("\n\nPlease input the value of 2d array of dimension %dx%d\n",x,y);

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("Value at index [%d][%d]:",i,j);
            scanf("%d",&p[i][j]);
        }
    }

}


void arrout(int x,int y,int b[][y])
{
    printf("\n\n");
    printf("-------Matrix----------------\n");
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

    printf("\n\n\n");


}

