//point lie inside or outside 

#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,x1,y1,d2,d;

    printf("\nCenter of the Circle:\n");

    printf("\nx:");
    scanf("%f",&x);
    printf("\ny:");
    scanf("%f",&y);


    printf("\nRadius of the Circle:\n");

    printf("\nr:");
    scanf("%f",&r);


    printf("\nNow enter any coordinates\n");

    printf("\nx1:");
    scanf("%f",&x1);
    printf("\ny1:");
    scanf("%f",&y1);

    d2=(x1-x)*(x1-x)+(y1-y)*(y1-y);
    d=sqrt(d2);

    if(d>r)
    {
        printf("point lies outside the cirle\n");
    }
    if(d<r)
    {
        printf("point lies inside the cirle\n");
        
    }
    else
    {
        printf("point lies on the circle\n");
    }
}