// distance in nautical miles from latitudes and longitudes

#include<stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,d;

    printf("\nLatitudes\n");

    printf("L1:");
    scanf("%f",&L1);

    printf("L2:");
    scanf("%f",&L2);

    printf("\n\nLongitudes\n");

    printf("G1:");
    scanf("%f",&G1);

    printf("G2:");
    scanf("%f",&G2);

    d=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));

    printf("\n\ndistance is:%.2f nautical miles\n\n",d);




}