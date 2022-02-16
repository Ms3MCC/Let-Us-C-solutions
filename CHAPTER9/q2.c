//3 subject

#include<stdio.h>

void result(int,int,int,float*,float*);

int main()
{
    int a,b,c;
    float avg,per;

    printf("Enter marks out of 100\n");


    printf("\nEnter the Marks in First Subject:"); 
    scanf("%d",&a);

    printf("\nEnter the Marks in Second Subject:");
    scanf("%d",&b);

    printf("\nEnter the Marks in Third Subject:");
    scanf("%d",&c);

    result(a,b,c,&avg,&per);

    printf("\nAverage:%.2f\nPercentage:%.2f\n",avg,per);

    return 0;

}


void result(int a,int b,int c,float*i,float*j)
{
    int d;
    d=a+b+c;
    *i=(a+b+c)/3.0;
    *j=(a+b+c)/3.0;

}
