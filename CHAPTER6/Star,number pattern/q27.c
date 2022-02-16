//number  pattern

#include<stdio.h>

int main()
{
    int i,j,k,n;
    

    for(i=1;i<=4;i++)
    {
        n=i;
        for(k=1;k<=4-i;k++)
        {
            printf(" ");
        }
      
        
        for(j=1;j<=1+2*(i-1);j++)
        {
            
            printf("%d",n);
            
            j<i?n--:n++;
            
            
           
        }
        printf("\n");

         
    }
}