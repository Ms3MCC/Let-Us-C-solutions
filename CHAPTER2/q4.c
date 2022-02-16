//cartesian to polar coordinates

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r2;
    float r,tanq,q;
    printf("x:");
    scanf("%d",&x);

    printf("y:");
    scanf("%d",&y);

    r2=x*x+y*y;
    r=sqrt(r);
    tanq=(float)y/x;
    q=atan(tanq)*180/3.14;

    printf("\n New coordinates are (%.1f,%.1f)\n\n",r,q);







}