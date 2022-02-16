//population of the town

#include<stdio.h>
#include<math.h>

int main()
{
    int p=100000,i,np;
    np=p;

     printf("\n\n\nPopulation at year 0:%d\n",np);

    for(i=1;i<=10;i++)
    {
        np=np+np*0.1;

        printf("\nPopulation at year %d:%d\n",i,np);

    }
    printf("\n\n\n");

}