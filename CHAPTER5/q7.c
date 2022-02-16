//count of positive,negative and zeros enter

#include<stdio.h>

int main()
{

    int a,count_z=0,count_n=0,count_p=0;
    int x;
    while(1<2)
    {
        printf("Enter the Number:");
        scanf("%d",&a);

        if(a>0)
        {
            count_p+=1;
        }
        else if(a<0)
        {
            count_n+=1;
        }
        else
        {
            count_z+=1;

        }

        printf("Type 1 to continue or 0 to discontinue:");
        scanf("%d",&x);

        if(x==0)
        {
            printf("\nPositive Numbers:%d\nNegative Numbers:%d\nZeros:%d\n",count_p,count_n,count_z);
            return 0;
        }

    }
}