//RANGE

#include<stdio.h>

int main()
{
    int max=0,min=0,range,a,i,num;

    printf("\nEnter how many number you want to enter:");
    scanf("%d",&a);

    printf("\nEnter the number:");   // first number entered
    scanf("%d",&num);

    max=min=num;


    i=2;//since first number has been entered loop staring from 2
    while(i<=a)
    {
        printf("\nEnter the number:");
        scanf("%d",&num);
        
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
        i++;
    }

    range=max-min;

    printf("\nRANGE:%d\n",range);
    
}