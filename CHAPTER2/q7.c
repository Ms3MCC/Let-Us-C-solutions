//all trignometric ratios


#include<stdio.h>
#include<math.h>

int main()
{
    float x;

    printf("\nangle x:"); //in degree
    scanf("%f",&x);
    x=x*3.14/180;

    printf("\n\nsinx=%.1f\n",sin(x));
    printf("cosx=%.1f\n",cos(x));
    printf("tanx=%.1f\n",tan(x));
    printf("cosecx=%.1f\n",1/sin(x));
    printf("secx=%.1f\n",1/cos(x));
    printf("cotx=%.1f\n\n\n",1/tan(x));
}