//SUM,AVERAGE

#include<stdio.h>

void arth(int,int,int,int,int,int*,float*);

int main()
{
    int a,b,c,d,e;
    int sum;
    float avg;

    printf("\nEnter the First number:");
    scanf("%d",&a);

    printf("\nEnter the Second number:");
    scanf("%d",&b);

    printf("\nEnter the Third number:");
    scanf("%d",&c);

    printf("\nEnter the Fourth number:");
    scanf("%d",&d);

    printf("\nEnter the Fifthnumber:");
    scanf("%d",&e);
      
    arth(a,b,c,d,e,&sum,&avg);

    printf("\nSUM:%d\nAVERAGE:%.2f\n",sum,avg);


}

void arth(int a,int b, int c,int d,int e,int*i,float*j)
{
    *i=a+b+c+d+e;
    *j=(*i)/5.0;


}