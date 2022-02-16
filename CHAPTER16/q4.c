// reverse Strings stored in array of pointer 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void  strrev(char*p)
{
   
    for(int i=0;i<(strlen(p))/2;i++)
    {
        char x=p[i];
        p[i]=p[strlen(p)-1-i];     
        p[strlen(p)-1-i]=x;
    }
    

}


int main()
{
    int n;
    printf("\nEnter the number of Strings you want to Enter:");
    scanf("%d",&n);

    char *arr[n];
    char *reverse;

    for(int i=0;i<n;i++)
    {
        char *p;
        p=(char*)malloc(1024*sizeof(char));
        printf("\n%d)Enter the String:",i+1);
        scanf(" %[^\n]s",p);
        p=realloc(p,strlen(p)+1);
        arr[i]=p;
        strrev(arr[i]);
    
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d)%s",i+1,arr[i]);

    }
    printf("\n");





}





