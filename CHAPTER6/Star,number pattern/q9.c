                               //alphabet pattern
/*

alphabet      ascii
 A            65
 B            66
 C            67
 D            68

 YOU CAN ALSO USE CHAR K='A' AND USE K++


*/

/*
#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i ||j>=3+i)
            {
                if(j<4)
                {
                    printf("%c",k);
                    k++;
                }
                else if(j==4)
                {
                    printf("%c",k);
                }
                else
                {
                    k--;
                    printf("%c",k);
                    
                }
               
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

*/



#include<stdio.h>

int main()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i ||j>=3+i)
            {
                printf("%c",k);
               
               
                 j<4?k++:k--;
                
               
            }
            else
            {
                printf(" ");

                if(k==4)
                {
                    k--;
                }
            }
        }
        printf("\n");
    }
}

