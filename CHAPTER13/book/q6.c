//to find smallest number

#include<stdio.h>
#include<stdlib.h>

#include "array.h"

void ques(int *);

int main()
{
    int p[25];

    arrin(p,25);
    
    printf("\nFINDING SMALLEST NUMBER IN ARRAY.....................");
    ques(p);

    return 0;

}

void ques(int *p)
{
    int t=0;
    t=*p;
    p++;
    for(int i=1;i<25;i++)
    {
        if(t>*p)
        {
            t=*p;
        
        }
        p++;


    }
    printf("\nSmallest number in array is %d\n\n",t);
}