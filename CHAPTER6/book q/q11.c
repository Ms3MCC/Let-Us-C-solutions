//24 hrs

#include<stdio.h>


int main()
{
    int a;

    for(a=1;a<=24;a++)
    {
        if(a<12)
        {
            printf("\n%dam\n",a);
        }
        else if(a==12)
        {
           printf("\n%d noon\n",a); 
        }
        else if(a>12 && a<24)
        {
            printf("\n%dpm\n",a-12);

        }
        else if(a==24)
        {
            printf("\n%d midnight\n",a-12);

        }

    }
}