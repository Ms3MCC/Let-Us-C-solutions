//prime factors



#include<stdio.h>
#include<math.h>

void pfactor(int);
int  rpfactor(int,int);

int main()
{
    int a;

    printf("\nEnter a number:");
    scanf("%d",&a);

    pfactor(a);

     printf("\nPrime factors of %d through recursion:\n",a);
    
    rpfactor(a,2);

    return 0;


}

void pfactor(int x)  //ittertion
{
    int i;

    printf("\nPrime factors of %d through ittertion:\n",x);

    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x/=i;   //primr factor due to this statement
        }
    }
   printf("\n");

}

int  rpfactor(int x,int i)
{
     
    if(x<=1)
    {
        return 0;
    }
    else if(x%i==0)
    {
        printf("%d ",i);
       
        rpfactor(x/i,i);

    }
    else
    {
        rpfactor(x,i+1);

    }
    printf("\n");


    

}


