//International Standard book number

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check(char *s)
{
    int n=strlen(s);
    if(n!=10)
    {
        printf("n=%d",n);
        printf("\nisbn is of only 10 digits\n");
        return 0;
    }
    int j=1;
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        char z=s[i];
        int value=(z=='x'||z=='X')?10:(z-'0');
       
        sum=sum+value*j;

        j++;

    }
 
    return(sum%11==0);

}


int main()
{
    char*isbn=(char*)malloc(1024*sizeof(char));
    printf("Enter 10 digit isbn number:");
    scanf("%s",isbn);
    isbn=realloc(isbn,strlen(isbn)+1);
    int c=check(isbn);
    if(c==1)
    {
        printf("\nValid\n");

    }
    else
    {
        printf("\nInvalid\n");
    }

}