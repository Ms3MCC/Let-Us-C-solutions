//use of realloc and free

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int*ptr,n;

    printf("\nEnter the Size of array:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {
      printf("\nEnter the value at index no %d:",i);
      scanf("%d",&ptr[i]);

    }
     for(int i=0;i<n;i++)
    {
      printf("\nThe value at index %d  is %d\n",i,ptr[i]);
      

    }
    printf("\nchange size of  array:");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    
    for(int i=0;i<n;i++)
    {
      printf("\nEnter the value at index no %d:",i);
      scanf("%d",&ptr[i]);

    }
     for(int i=0;i<n;i++)
    {
      printf("\nThe value at index %d  is %d\n",i,ptr[i]);
      

    }

    free(ptr);

    
      return 0;
}