//copying element in reverse in other array

#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void rev(int[],int[],int);

int main()
{
    int *p,*j,n;

    printf("\nEnter the size of an array:");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));
    
    arrin(p,n);

    
    printf("\nAdding values at second array in reverse\n");

    j=(int*)malloc(n*sizeof(int));
    rev(p,j,n);
    arrout(j,n);

    free(p);
    free(j);
    return 0;

    

}

void rev(int p[],int j[],int n)
{
     for(int i=0;i<n;i++)
    {
        j[i]=p[n-1-i];

    }

}

