
//reversing 5 digit number

/*
#include<stdio.h>

int main()
{
    int a,s=0;
    printf("Enter the number:");
    scanf("%d",&a);
   

    s=s+a%10*10000;  //% * have same presedence so according to associativity from left to right firt % will be operated
    a=a/10;

    s=s+(a%10)*1000;
    a=a/10;

    s=s+(a%10)*100;
    a=a/10;

    s=s+(a%10)*10;
    a=a/10;

    s=s+(a%10);
    a=a/10;

    printf("\nreverse no is:%d\n",s);


}
*/


// reversing n  digit number

/*
#include<stdio.h>
#include<math.h>

int main()
{
    int a,s=0,c,count=0;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a;
   

    while(c>0)
    {
        count=count+1;
        c=c/10;
    }
    count=count-1;
    count=pow(10,count);

      while(a>0)
    {
        s=s+a%10*count;
        a=a/10;
        count=count/10;
    }

    printf("\nreverse no is:%d\n",s);






}
*/

//much better

#include<stdio.h>

int main()
{
    int a,s=0;
    printf("Enter the number:");
    scanf("%d",&a);


while(a>0)
{
    s=s*10+a%10;
    a=a/10;
}

printf("\nreverse no is:%d\n",s);

}




   