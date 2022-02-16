//smallest no of notes

#include<stdio.h>

int main()
{
    int n,x=0;
    printf("\nenter N:");
    scanf("%d",&n);

    printf("\n\nSMALLEST NO OF NOTES REQUIRED ARE \n\n");

    printf("\n\nno. of rupees 100 notes:%d",n/100);
    x=x+n/100;
    n=n%100;

    printf("\nno. of rupees 50 notes:%d",n/50);
    x=x+n/50;
    n=n%50;

    printf("\nno. of rupees 10 notes:%d",n/10);
    x=x+n/10;
    n=n%10;

    printf("\nno. of rupees 5 notes:%d",n/5);
    x=x+n/5;
    n=n%5;

    printf("\nno. of rupees 2 notes:%d",n/2);
    x=x+n/2;
    n=n%2;

    printf("\nno. of rupees 1 notes:%d\n",n/1);
    x=x+n/1;

    printf("\nTotal notes:%d\n\n",x);
    

}