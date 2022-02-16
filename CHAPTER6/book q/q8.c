//pythagorean triplets

#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n;
    float m;

    printf("PYTHAGOREAN TRIPLETS :\n");

    for(i=1;i<30;i++)
    {
        
        for(j=i;j<=30;j++)
        {
            k=i*i+j*j;
            m=sqrt(k);
            n=(int)m;

            if(n==m && m<=30)
            {
                printf("\n%d,%d,%d\n",i,j,n);
            }



        }
    }
}