//all combinations of 1,2,3


#include<stdio.h>

int main()
{
    int i,a,b,j,m;

    printf("All combinations of 1,2,3 are:\n");


    m=1;
    for(i=111;i<=333;i++)
    {
       
        b=i;

        j=1;
       while(j<=3)
       {
            a=b%10;
            b/=10;
            if(a!=1 && a!=2 && a!=3)//as only 1,2,3 are allowed
            {
                break;
            }
            j++;
       }
        if(j==4)
        {
            printf("%d)%d\n",m,i);
            m++;
        }
      

        
    }
}