//interchanging odd and even numbers in an array

#include<stdio.h>
#include<stdlib.h>
 
void odevn(int[],int);



int main()
{
    int *p,n,i,t;

    printf("\nEnter the size of an array:");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value at index no. %d:",i);
        scanf("%d",&p[i]);

    }
    odevn(p,n);//address of base element is passed

   
    
    
    for(i=0;i<n;i++)
    {
        printf("\nvalue at index no. %d: %d",i,p[i]);
        

    }
    printf("\n");
    free(p);



}

void odevn(int p[],int n)
{
    int t,i;
    t=p[0];
    for(i=0;i<n-1;i++)
    {
        p[i]=p[i+1];
    }
    p[n-1]=t;

}