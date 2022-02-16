//Ramanunjan number

#include<stdio.h>

int main()
{
    int q,w,a,b,k,i;
   printf("Enter no between which you want ramanunjan number:\n");
   printf("1:");
   scanf("%d",&q);
   printf("2:");
   scanf("%d",&w);

   printf("RAMANUNJAN NUMBERS:\n");

   for(i=q;i<=w;i++)
   {
       k=0;
       for(a=1;a*a*a<i;a++)
       {
           for(b=a;a*a*a+b*b*b<=i;b++)
           {
               if(a*a*a+b*b*b==i)
               {
                   
                   k++;
               }

           }
           
        }

        if(k==2)
        {
            printf("\n%d\n",i);
        }




   }


   

        


    
}