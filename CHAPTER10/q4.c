//binary equivalent


#include<stdio.h>
#include<math.h>

void binary(int);
int rbinary(int);

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    binary(a);
    printf("\nBinary Equivalent with Recurssion   :%d\n",rbinary(a));
    return 0;
}

void binary(int a)
{
    int x=0;
    int i=1;
    while(a!=0)
    {
        x=x+(a%2)*pow(10,i-1);
        a/=2;
        i++;

    }
    
    printf("\nBinary Equivalent without Recurssion:%d\n",x);
   
}

int rbinary(int a)
{
    int x=0;
    if(a==1)
    {
        return 1;
    }
    else
    {
        x=a%2+rbinary(a/2)*10;//factor of 10 will keep on increasing on each recurssion 

    }
    
    return x;
    

}



