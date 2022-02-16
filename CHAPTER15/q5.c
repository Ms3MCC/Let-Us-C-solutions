//fibonacci words of order 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>













int main()
{
    char a[500]="a";
    char b[500]="b";
    char z[500];
    int n;

    printf("\n till when:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("\nf(%d)=%s",i,a);
        strcpy(z,a);
        strcpy(a,b);
        strcat(b,z);
    }

    printf("\n");


  return 0;

}










