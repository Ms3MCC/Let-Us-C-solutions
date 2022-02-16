//converting numerical string to integer;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int convert(char*num)
{
    int n=0;
    int i=0;
    while(num[i]!='\0')
    {
        char x=num[i];
        n=n*10+(x-'0');
        i++;

    }
    return n;

}


int main()
{
    char *num=(char*)malloc(1024*sizeof(char));
    printf("\nEnter Numerical String:");
    scanf("%s",num);
    num=realloc(num,strlen(num)+1);
    int n=convert(num);
    printf("\ninteger:%d\n",n);

}

