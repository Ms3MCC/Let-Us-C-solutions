//transpose of 4x4 matrix

// no need to include stdio as already included in arr.h
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

int main()
{
    int row,col;
    ddim(&row,&col);
    int **AT;
    int **A=(int**)malloc(sizeof(int*)*row);

    for(int i=0;i<row;i++)
    {
        A[i]=(int*)malloc(sizeof(int)*col);
    }
    darrin(A,row,col);

    printf("--------A Matrix-------");
    darrout(A,row,col);

    // in transpose row becomes col and col becomes row with element

    // int AT[col][row];

    AT=(int**)malloc(sizeof(int*)*col);
    for(int j=0;j<col;j++)
    {
        AT[j]=(int*)malloc(sizeof(int)*row);
    }
     transpose(AT,A,col,row);
     

   

     printf("--------AT-Matrix-------");
     darrout(AT,col,row);
}