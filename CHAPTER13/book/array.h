#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void arrin(int p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value at index %d:",i);
        scanf("%d",&p[i]);
    }
}

void arrout(int p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nvalue at index %d: %d",i,p[i]);
       
    }
    printf("\n");

}