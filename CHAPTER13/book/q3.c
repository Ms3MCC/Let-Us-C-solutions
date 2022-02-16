#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void ques(int[],int);

int main()
{
    int p[25],n;
    arrin(p,25);
    printf("\nEnter the number to search in array:");
    scanf("%d",&n);

    ques(p,n);


   return 0;
}
void ques(int p[],int n)
{
    int m=0;
    for(int i=0;i<25;i++)
    {
        if(p[i]==n)
        {
            m++;

        }
    }
    if(m>0)
    {
        printf("\nYES! %d is present in array %d number of times,\n",n,m);
    }
    else
    {
        printf("NO! %d is not present in array\n",n);
    }
    printf("\n");

}