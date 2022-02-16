//test small case or not using macro
#include<stdio.h>


#define small(x) (x>=97 && x<=112)
#define big(x) (x>=65 && x<=90)
#define large(x,y) if(x>y){printf("%d is greater\n",x);}\
                   else {printf("%d is greater\n",y);}
    

int main()
{
    int a,c,d;
    char x,y;

    printf("\na)Checking lower case letter\n");
    printf("\nEnter the character:");
    scanf("%c",&x);

    a=(int)x;
    c= small(a);
    if(c==1)
    {
        printf("\nIts lowercase letter\n");
    }
    else
    {
        printf("\nIts not  lowercase letter\n");

    }

    printf("\nb)Checking upper case letter\n");
    printf("\nEnter the character:");

    scanf(" %c",&y);
    a=(int)y;
    c= big(a);
     if(c==1)
    {
        printf("\nIts uppercase letter\n");
    }
    else
    {
        printf("\nIts not  uppercase letter\n");

    }
    printf("\nc)If its a alphabet or not\n");
    
    printf("\nEnter the character:");
    scanf(" %c",&x);//giving space important
 

    a=(int)x;

    c=(small(a) || big(a));

    if(c==1)
    {
        printf("\nIts a alphabet\n");
    }
    else
    {
        printf("\n Its not a alphabet\n");
    }

       printf("\nd)Bigger of two numbers\n");
       printf("\nEnter the number:");
       scanf("%d",&a);
       printf("\nEnter the character:");
       scanf("%d",&c);
       large(a,c)

      



    



}