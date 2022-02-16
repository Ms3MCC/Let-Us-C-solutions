//armstrong numbers

#include<stdio.h>

int main()
{
    int i,a,b,c,d,e,f=0;

    i=i;
    while(i<=500)
    {
        f=0;
        e=i;
        while(e>0)
        {
            f=f+1;
            e=e/10;

        }
        
        if(f==3)
        {
            e=i;
            a=e%10;
             e=e/10;
            b=e%10;
             e=e/10;
            c=e%10;
            d=a*a*a+b*b*b+c*c*c;

            if(d==i)
            {
                printf("\nArmstrong no:%d\n",i);
            }


        }
        else if(f==2)
        {
            e=i;
            a=e%10;
            e=e/10;
            b=e%10;
            d=a*a*a+b*b*b;

             if(d==i)
            {
                printf("\nArmstrong no:%d\n",i);
            }

        }
        else if(f==1)
        {
            e=i;
            a=e%10;
            d=a*a*a;

            if(d==i)
            {
                printf("\nArmstrong no:%d\n",i);
            }

        }

        i=i+1;

    }
}