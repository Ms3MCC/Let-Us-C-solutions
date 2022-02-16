
#include <stdio.h>

int main()
{
   int m[4][4];
   int i=0,j=0,k=1;
   
   for(i=0;i<4;i++)
   {
         for(j=0;j<4;j++)
         {
         printf("%d)Enter the number at[%d][%d]:",k,i,j);
         scanf("%d",&m[i][j]);
         k++;
       
         }
       
   }
   
      for(i=0;i<4;i++)
   {
         for(j=0;j<4;j++)
         {
             if(m[i][j]>=10)
             {
                  printf(" %d  ",m[i][j]);
                 
                 
             }
             else
             {
                 printf("  %d  ",m[i][j]);
                 
             }
            
       
       
         }
         printf("\n");
       
   }
   
   
   
   
  
}
