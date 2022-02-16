//compound interest

#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float a,p,r,q,n,m,o;


   for(i=1;i<=10;i++)
   {
       
       printf("\nEnter the principal amount:");
       scanf("%f",&p);
       printf("Enter the annual rate:");
       scanf("%f",&r);
       printf("Enter the year:");
       scanf("%f",&n);
       printf("Compounds how many times:");
       scanf("%f",&q);
       m=n*q;
       o=pow((1+r/q),m);

       a=p*o;
       printf("amount:%f",a);

   }
    
}