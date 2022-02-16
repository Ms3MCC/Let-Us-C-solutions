//reversing number and comparing

#include<stdio.h>

int main()
{
    int n,rev=0,c;

    printf("\nENTER NUMBER:");
    scanf("%d",&n);
    c=n;

    rev=rev*10+n%10;
    n=n/10;

    rev=rev*10+n%10;
    n=n/10;

    rev=rev*10+n%10;
    n=n/10;

    rev=rev*10+n%10;
    n=n/10;

    rev=rev*10+n%10;
    printf("\nReversed number is:%d\n",rev);

    if(c==rev)
    {
        printf("\nBOTH ARE EQUAL\n");
    }
    else
    {
        printf("\nTHEY ARE NOT EQUAL\n");

        if(c>rev)
        {
            printf("original number %d is greater than reversed number %d\n",c,rev);
        }
        else
        {
            printf("reversed number %d is greater than original number %d\n",rev,c);

        }
    }
    
}