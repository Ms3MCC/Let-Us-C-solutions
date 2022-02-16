//RGB to CMYK

#include<stdio.h>

float max(float a,float b, float c)
{
    float z;

    z=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return z;
}

int main()
{
    int red,green,blue;
    float cyan,magenta,yellow,black,white;

    printf("\nEnter Red value: ");//0-255
    scanf("%d",&red);
    printf("Enter Green value: ");//0-255
    scanf("%d",&green);
    printf("Enter Blue value: ");//0-255
    scanf("%d",&blue);

   white= max(red/255.0,green/255.0,blue/255.0);
   cyan=(white-(red/255.0))/white;
   magenta=(white-(green/255.0))/white;
   yellow=(white-(blue/255.0))/white;
   black=1-white;

   printf("\nCyan:%f\n",cyan);
   printf("Magenta:%f\n",magenta);
   printf("Blue:%f\n",yellow);
   printf("Black:%f\n",black);

   return 0;



}