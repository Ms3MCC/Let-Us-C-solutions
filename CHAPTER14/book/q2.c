// pick largest number from any 5 row by 5 column matrix
#include<stdio.h>
#include<stdlib.h>
#include"arr.h"


void largest(int** b,int x,int y)
{
    int max=b[0][0];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            int a=b[i][j];
            max=(a>=max)?a:max;

        }
       
    }
     printf("\nlargest number is %d\n",max);

}

int main()
{
    int **b,x,y;
    ddim(&x,&y);
   
    b=(int**)malloc(sizeof(int*)*x);
    
    for(int i=0;i<x;i++)
    {
        b[i]=(int*)malloc(sizeof(int)*y);
    }

    darrin(b,x,y);
    darrout(b,x,y);
    largest(b,x,y);

    
   

    
    
}