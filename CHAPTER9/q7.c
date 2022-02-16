//euclid algorithm

#include<stdio.h>
#include<math.h>

void divisor(int,int,int*);


int main()
{
    int a,b,c;
    printf("\nEnter the First number:");
    scanf("%d",&a);

    printf("\nEnter the Second number:");
    scanf("%d",&b);
    divisor(a,b,&c);

    printf("\nGreatest Common Divisor is %d\n",c);


}

void divisor(int j,int k,int*c)
{
    int i,m=10;

    while(m>0)
    {
        i=j/k;
        m=j-i*k;
        j=k;
        if(m>0)
        {
             k=m;
             
        }
       
    }

    *c=k;

}
