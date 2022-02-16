// first day of the year only from 2001 to 2099

/*#include<stdio.h>

int main()
{
    int y,diff,leap,t,x;

    printf("Enter the year:");
    scanf("%d",&y);

    diff= y-2001;
    leap=diff/4;
    t=diff+leap;
    x=t%7;
    

    if (diff>=0)
    {
        printf("\n\nFIRT DAY IS:");

        if(x==0)
    {
        printf("Monday");

    }
    else if(x==1)
    {
        printf("Tuesday");
    }
    else if(x==2)
    {
        printf("Wednesday");
    }
    else if(x==3)
    {
        printf("Thursday");
    }
    else if(x==4)
    {
        printf("Friday");
    }
    else if(x==5)
    {
        printf("Saturday");
    }
    else if(x==6)
    {
        printf("Sunday");
    }
    else if(x==7)
    {
        printf("Tuesday");
    }
    else
    {
        printf("error...");
    }


    }
    else
    {
        printf("\n\nEnter year greater than or equal to 2001");

    }

    printf("\n\n");
    
}
*/


// from 1 year(remember there is no year 0 from 1BC we jump to 1 AD) and first day of year 1 was monday

#include<stdio.h>

int main()
{
    int y,diff,leap=0,i,t,x;

    printf("Enter the year:");
    scanf("%d",&y);

    diff=y-1;

    for(i=1;i<y;i++)
    {
        if(i%4==0 && (i%100!=0||i%400==0))
        {
            leap=leap+1;
        }
    }
    t=diff+leap;
    x=t%7;

     if (diff>=0)
    {
        printf("\n\nFIRT DAY IS:");

        if(x==0)
    {
        printf("Monday");

    }
    else if(x==1)
    {
        printf("Tuesday");
    }
    else if(x==2)
    {
        printf("Wednesday");
    }
    else if(x==3)
    {
        printf("Thursday");
    }
    else if(x==4)
    {
        printf("Friday");
    }
    else if(x==5)
    {
        printf("Saturday");
    }
    else if(x==6)
    {
        printf("Sunday");
    }
    else if(x==7)
    {
        printf("Tuesday");
    }
    else
    {
        printf("error...");
    }


    }
    else
    {
        printf("\n\nEnter year greater than or equal to 1");

    }

    printf("\n\n");
    
}






