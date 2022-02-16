//if points lie in same line

#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float m1, m2;

    printf("\nx1:");
    scanf("%d",&x1);
    printf("\ny1:");
    scanf("%d",&y1);

    printf("\nx2:");
    scanf("%d",&x2);
    printf("\ny2:");
    scanf("%d",&y2);

    printf("\nx3:");
    scanf("%d",&x3);
    printf("\ny3:");
    scanf("%d",&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1==m2)
    {
        printf("All points lie on same line\n");
    }
    else
    {
        printf("All points donot lie on same line\n");   
    }

   

}