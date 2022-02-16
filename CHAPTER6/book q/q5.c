//level of intelligence

#include<stdio.h>

int main()
{
    float i,x;
    int y;

    for(y=1,x=5.5;y<=6;y++,x=x+0.5)
    {
        i=2+(y+0.5*x);

        printf("\n%.2f=2+(%d+0.5x%.2f)",i,y,x);
        x++;
    }
    printf("\n\n");
}