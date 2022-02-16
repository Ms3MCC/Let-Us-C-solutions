//x axis y axis or origin

#include<stdio.h>
int main()
{
    int x,y;
    printf("\nx:");
    scanf("%d",&x);

    printf("\ny:");
    scanf("%d",&y);

    if(x==0 &&y!=0)
    {
        printf("\nPoint lies on y-axis\n");
    }
    else if(x!=0 &&y==0)
    {
        printf("\nPoint lies on x-axis\n");
    }
    else if(x==0 && y==0)
    {
        printf("\nPoint lies on the origin");
    }
    else
    {
        printf("point lies on graph other than origin, x-axis, y-axis");

    }

}