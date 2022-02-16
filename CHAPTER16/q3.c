//sort name in alphabetical order
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void sort(char**m,int n)
{
    char temp[100];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(m[i],m[j])>0)
            {
                strcpy(temp,m[i]);
                strcpy(m[i],m[j]);
                strcpy(m[j],temp);

            }
        }
    }
    


}

int main()
{
    int n;
    printf("\nEnter number of names you want to enter:");
    scanf("%d",&n);
    char **names=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        names[i]=(char*)malloc(1024*sizeof(char));
        printf("\n%d)Enter Name:",i+1);
        scanf("%s",names[i]);
    }

    sort(names,n);

    printf("\n------Sorted Names in Alphabatic Order-----\n");
    for(int i=0;i<n;i++)
    {
        printf("\n%s",names[i]);
    }
    printf("\n");


}