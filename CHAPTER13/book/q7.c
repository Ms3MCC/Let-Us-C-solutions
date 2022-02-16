//multiply each element in array by 3

#include<stdio.h>
#include<stdlib.h>
#include "array.h"

void modify(int[]);

int main()
{
    int p[10];
    arrin(p,10);

    printf("Multiplying each element in array by 3...............\n");
    modify(p);

    arrout(p,10);
    printf("\n\n");
    return 0;
}
void modify(int p[])
{
    for(int i=0;i<10;i++)
    {
        p[i]=p[i]*3;
    }
}