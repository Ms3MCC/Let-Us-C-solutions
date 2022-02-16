#include<stdio.h>

int main()
{
    float l,b,r,ra,rp,cc,ca;

    printf("Enter lenght of a triangle:");
    scanf("%f",&l);

    printf("Enter breadth of a triangle:");
    scanf("%f",&b);

    printf("Enter radius of a circle:");
    scanf("%f",&r);

    ra=l*b;
    rp=2*(l+b);
    ca=r*r*22/7;
    cc=2*r*22/7;

    printf("\narea of rectangle:%f\nperimeter of rectangle:%f\narea of circle:%f\ncircumference of circle:%f",ra,rp,ca,cc);
    


}