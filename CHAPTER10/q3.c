//Fibonacchi numbers

/*
#include<stdio.h>

int fib(int,int);


int main()
{
    printf("\n1 1 ");
    fib(1,1);

}

int fib(int i,int j )
{
   int k,m=0;
   k=i+j;
   

   if(k<100000)
   {
       printf("%d ",k);
       
       fib(j,k);

   }
   else 
        return 0;

   


}

*/


#include<stdio.h>

int fib(int);

int main()
{
    int a,i;

    printf("\nEnter upto which term you want fibonaachi series:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf(" %d",fib(i));
    }
    printf("\n");
}

int fib(int i)
{
    if(i==1||i==2)
    {
        return 1;
    }
    else
    {
     return fib(i-1)+fib(i-2);
    }
}