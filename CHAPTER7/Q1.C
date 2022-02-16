//MENU DRIVEN PROGRAM

#include<stdio.h>

int main()
{
    int x,y;
    int fac=1,i;
    while(2>1)
    {
        printf("\nFactorial of Number:1\nPrime or Not:2\nOdd or Even:3\nExit:4\n");
        scanf("%d",&x);

        switch(x)
        {
            case 1:goto fac;
            break;
            case 2:goto pri;
            break;
            case 3:goto oeven;
            break;
            case 4:return 0;

        }
        fac:
        {
            printf("Enter the number:");
            scanf("%d",&y);
            fac=y;

            while(y>1)
            {
                
                fac=fac*(y-1);
                y--;
               
            }
             printf("\n factorial :%d\n\n",fac);






            goto out;



        }
        pri:
        {
            printf("Enter the number:");
            scanf("%d",&y);
            if(y==1)
            {
                printf("\n1 is neither prime nor composite\n");
                goto out;

            }

            for(i=2;i<=y-1;i++)
            {
                if(y%i==0)
                {
                    printf("\nIts not a prime number\n");
                    goto out;
                }
            }
            printf("\nIts a prime number\n");

        

            goto out;

        }
        oeven:
        {
            printf("Enter the number:");
            scanf("%d",&y);
            if(y%2==0)
            {
                printf("\nIts a even number\n");
                 goto out;

            }
            else
            {
                printf("\nIts not  a even number\n");
                 goto out;

            }
           

        }

        out:
        {

        }

    }

}