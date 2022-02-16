//profit or  loss

#include<stdio.h>

int  main()
{
    float cp,sp,diff;

    printf("Enter CP:");
    scanf("%f",&cp);

    printf("Enter SP:");
    scanf("%f",&sp);

    if(sp>cp)
    {
        printf("\nYou have made thr profit of Rupees %.2f\n\n",sp-cp);
    }
    else if(cp>sp)
    {
        printf("\nYou have made the loss of Rupees %.2f\n\n",cp-sp);
    }
    else
    {
        printf("\nno profit no loss\n\n");
    }



}