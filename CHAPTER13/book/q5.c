//to check arr[0]=arr[n-1]

#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void ques(int[],int);

int main()
{
    int *p,n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));
    arrin(p,n);
    ques(p,n);
}
void ques(int p[],int n)
{
    int x=0,m;
    if(n%2!=0)
    {
        m=(n+1)/2;

    }
    else
    {
        m=n/2;
    }

    for(int i=0;i<m;i++)
    {
        if(p[i]==p[n-1-i])
        {
            if(i!=n-1-i)
            {
                x++;
                printf("\n%d)p[%d]=p[%d]=%d\n",x,i,n-1-i,p[i]);

            }
            
           

        }
    }


}