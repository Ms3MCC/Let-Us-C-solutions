#include<stdio.h>
#include<math.h>
#define pi 3.14159

#define triangle(a,b,c)   printf("\nperimeter of triangle:%d",a+b+c);\
                          printf("\nArea of triangle:%.2f\n",sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)));
                         
#define sqaure(x) printf("\nperimeter of sqaure:%d",4*x);\
                   printf("\nArea of sqaure:%d\n",x*x);   

#define circle(r) printf("\nCircumference of circle:%.2f",2*pi*r);\
                   printf("\nArea of circle is:%.2f\n",pi*r*r);


