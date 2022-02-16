//print prime numbers


#include<stdio.h>

int main()
{
    int i,num;
    printf("\n\nPrime Numbers From 1 And 300 are:\n");

    for(num=2;num<=300;num++)
    {
        i=2;
        while(i<=num-1)
        {
            if(num%i==0)
            {
                break;//takes directly out of while loop without incrementing
                
            }
            i++;
        }
        if(num==i)
        {
            printf("\n%d",num);
        }
    }
    printf("\n\n");
}