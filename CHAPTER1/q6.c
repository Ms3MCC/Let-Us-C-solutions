#include<stdio.h>

int main()
{
    int l=1189,b=841,c,i;

    for (i=0;i<=9;i++)
    {
        printf("\nA%d=%d*%d\n\n",i,l,b);
        l=l/2;
        c=l;
        l=b;
        b=c;
    }


}