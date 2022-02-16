//Add two 6x6 matrix
#include"arr.h"

void sum(int**A,int**B,int**C,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

}

int main()
{
    int **A;
    int **B;
    int **C;

    int row,col;
    printf("\n WE need to Add two matrix so, matrix should be square");

    ddim(&row,&col);
    while(row!=col)
    {
        printf("\n-----ERROR----\nIn square Matrix nrow=ncol\n");
        ddim(&row,&col);
    }

    A=(int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    {
        A[i]=(int*)malloc(sizeof(int)*col);
    }

    B=(int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    {
        B[i]=(int*)malloc(sizeof(int)*col);
    }

    C=(int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    {
         C[i]=(int*)malloc(sizeof(int)*col);
    }

    darrin(A,row,col);
    darrin(B,row,col);
    sum(A,B,C,row,col);

    darrout(A,row,col);
    printf("+");
    darrout(B,row,col);
    printf("=");
    darrout(C,row,col);


}