//TOWER OF HANOI PROBLEM
//three peg labelled a,b,c


#include<stdio.h>

int toh(int,char,char,char);

int main()
{
    int n;

    printf("Enter no of disks:");
    scanf("%d",&n);

    printf("Sequence envolved in tower of hanoi are:\n");
    toh(n,'A','C','B');
}

int toh(int n,char a, char c, char b)
{
    if(n==1)
    {
      printf("\nMove disk 1 from peg %c to peg %c\n",a,c);
    }
    else
    {
      toh(n-1,a,b,c);
      printf("\nMove disk %d from peg %c to peg %c\n",n,a,c);
      toh(n-1,b,c,a);
      

    }
    

   


}