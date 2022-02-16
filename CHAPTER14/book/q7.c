// if square matrix is symmetric , square matric has same now of rows and columns
//symmetric matrix means AT=A  A transpose = A
#include<stdio.h> 
#include<stdlib.h>
#include"arr.h"

void transpose(int **AT,int **A,int col,int row)
{
     for(int j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
        {
            AT[j][i]=A[i][j];
        }
    }

}
int isSymmetric(int **AT,int **A,int col,int row)
{
      for(int j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
        {
            if(AT[i][j]!=A[i][j])
            {
                return -1;
                

            }
           
            
        }
    }
    return 1;

}

int main()
{
    int row,col;
    int sym;
    printf("\n Enter dimension for square Matrix\n");
    ddim(&row,&col);
    while(row!=col)
    {
        printf("\n-----ERROR----\nIn square Matrix nrow=ncol\n");
        ddim(&row,&col);
    }
    int **AT;
    int **A=(int**)malloc(sizeof(int*)*row);

    for(int i=0;i<row;i++)
    {
        A[i]=(int*)malloc(sizeof(int)*col);
    }
    darrin(A,row,col);

    printf("--------A Matrix-------");
    darrout(A,row,col);

    AT=(int**)malloc(sizeof(int*)*col);
    for(int j=0;j<col;j++)
    {
        AT[j]=(int*)malloc(sizeof(int)*row);
    }
     transpose(AT,A,col,row);
     printf("--------AT-Matrix-------");
     darrout(AT,col,row);

      sym= isSymmetric(AT,A,col,row);
     if(sym==1)
     {
         printf("\n Congratulations!\nIts a symmetric Matrix\n ");
     }
     else
     {
         printf("\n ALAS!!\nIts not a symmetric Matrix\n ");

     }
     printf("\n\n");



    


    
}
