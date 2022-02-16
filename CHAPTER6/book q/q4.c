// multiplication table


#include<stdio.h>

int main()
{
    int a,i;
    printf("\nEnter number:");
    scanf("%d",&a);

    printf("Multiplication Table\n");

    for(i=0;i<=10;i++)
    {
        printf("\n%dx%d=%d",a,i,a*i);
        
    }

    printf("\n\n");
    

}