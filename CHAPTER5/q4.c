//ascii

#include<stdio.h>

int main()
{
    char x;
    int i=0;
    
    while(i<=255)
    {
        x=(char)i;
        printf("\nascii no:%d ascii character:%c\n",i,x);
        i++;
    }
    
}