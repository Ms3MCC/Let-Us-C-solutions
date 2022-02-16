// creating 3d array and printing first and last Element
#include<stdio.h>


int main()
{
    int threed[3][2][3]={
                            {
                                {1,2,3},
                                {4,5,6}
                            },
                            {
                                {7,8,9},
                                {10,11,12}
                            },
                            {
                                {13,14,15},
                                {16,17,18}
                            }

                        };
        int a=threed[0][0][0]; //first Element
        int b=threed[2][1][2];
        printf("\n");

        printf("First Element of Array is:%d\n",a);   
        printf("Last  Element of Array is:%d\n",b);   
                       
        printf("\n");
}