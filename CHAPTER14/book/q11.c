//determinant of matrix

#include"arr.h"

int determinant(int **a,int k)
{
    int det,c,s=1,i,j,m,n;
    int **b=(int**)malloc(sizeof(int*)*k);
    for(int i=0;i<k;i++)
    {
        b[i]=(int*)malloc(sizeof(int)*k);
    }

    if(k==1)
    {
        return a[0][0]; 
    }
    else
    {
        det=0;
        for(c=0;c<k;c++)
        {
            m=n=0;
            for(i=0;i<k;i++)
            {
                for(j=0;j<k;j++)
                {
                    b[i][j]=0;
                    if(i!=0 && j!=c)
                    {
                        b[m][n]=a[i][j];
                        if(n<k-2)
                        {
                            n++;
                        }
                        else
                        {
                            n=0;
                            m++;
        
                        }
                    }
                }
            }
            det=det+s*(a[0][c]*determinant(b,k-1));
            s=-1*s;

        }

    }
    return(det);
}


int main()
{
    int **A;
    

    int row,col;
    int k; //order;
    int det;
    printf("\n WE need to multiply two matrix so, matrix should be square");

    ddim(&row,&col);
    while(row!=col)
    {
        printf("\n-----ERROR----\nIn square Matrix nrow=ncol\n");
        ddim(&row,&col);
    }
     k=row;

     A=(int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    {
        A[i]=(int*)malloc(sizeof(int)*col);
    }

    

    darrin(A,row,col);
    det=determinant(A,k);
    printf("\n%d",det);
  


}