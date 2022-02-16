//find aggregate marks,percentage out of 100


#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,st;
    float per;

    printf("Enter marks in first subject:");
    scanf("%d",&s1);

    printf("Enter marks in second subject:");
    scanf("%d",&s2);

    printf("Enter marks in third subject:");
    scanf("%d",&s3);

    printf("Enter marks in fourth subject:");
    scanf("%d",&s4);

    printf("Enter marks in fifth subject:");
    scanf("%d",&s5);

    st=s1+s2+s3+s4+s5;
    per=st/5.0;

    printf("\naggregate marks:%d\npercentage=%f\n",st,per);


}