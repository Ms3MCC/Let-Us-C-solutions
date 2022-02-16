//21 matchsticks

#include<stdio.h>

int main()
{
    int a,b;
    int c=21;
    printf("\nTotal Matchsticks:%d\n",c);


    while(c>1)
    {
        printf("\nEnter your number:");
        scanf("%d",&a);
        c-=a;
        printf("Matchsticks left:%d\n",c);

        b=5-a;
        c-=b;
        printf("\nComputer chooses:%d\n",b);
        printf("Matchsticks left:%d\n",c);
       
        

    }

    printf("\nNow you have to pick up last matchstick left,so you are the looser,hahaha\n Now never  dream of beating a computer \n");
    

}