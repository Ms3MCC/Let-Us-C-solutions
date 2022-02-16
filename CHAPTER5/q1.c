//overtime pay

#include<stdio.h>

int main()
{
    int h,i;
    float op=0;
    printf("\nEnter Total Work Hours: ");
    scanf("%d",&h);

    
    while(h>40)
    {
        op+=12;
        h--;

    }

    printf("\nOvertime Pay for single Employee:%.2f\n",op);
    printf("\nFOR 10 EMPLOYEES:%.2f\n",op*10);

}