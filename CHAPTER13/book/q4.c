// positive odd even

#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void posneg(int[]);

void oddeven(int[]);

int main()
{
    int p[25];

    arrin(p,25);
    printf("\n\nCALCULATING TOTAL POSITIVE,NEGATIVE NUMBERS..................\n");
    posneg(p);
    printf("\n\n\nCALCULATING TOTAL ODD,EVEN NUMBERS..................\n");
    oddeven(p);
    
    return 0;
}

void posneg(int p[])
{
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<25;i++)
    {
        if(p[i]>0)
        {
            x++;

        }
        else if(p[i]<0)
        {
            y++;

        }
        else
        {
            z++;
        }
    }

    printf("\nNo. of Positive Integers:%d\n",x);
    printf("\nNo. of Negative Integers:%d\n",y);
    printf("\nNo. of Zeroes           :%d\n",z);


}

void oddeven(int p[])
{
    int x,y;
    x=y=0;
    for(int i=0;i<25;i++)
    {
        if(p[i]%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    printf("\nNo. of Even Integers:%d\n",x);
    printf("\nNo. of Odd  Integers:%d\n",y);



}