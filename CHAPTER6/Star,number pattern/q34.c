//number pattern
/*
#include<stdio.h>

int main()
{
    int i,j,k=1,p=3,l=2,m=4;
 
    

    for(i=1;i<=5;i++)
    {
        
        
       
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                if(i==1)
                {
                    printf("%d",k);
                }
                else
                {
                    k=k+7-i;
                    printf("%d",k);

                }
                
            }
            else if(j==2)
            {
                if(i==2)
                {
                    printf("%d",l);
                }
                else
                {
                    l=l+8-i;
                    printf("%d",l);

                }
                

            }
            else if(j==3)
            {
                if(i==3)
                {
                    printf("%d",p);
                }
                else
                {
                    p=p+9-i;
                    printf("%d",p);

                }
                

            }
             else if(j==4)
            {
                printf("%d",m);
                m+=5;
                
                

            }
            else
            {
                printf("5");
            }
            
        }


        printf("\n");
    }
}

*/

//better code


#include<stdio.h>

int main()
{
    int i,j,row,p,k;

    printf("Enter no.of rows:");
    scanf("%d",&row);
    k=1;



    for(i=1;i<=row;i++)
    {
        p=k;
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            p=p-(row+j-i);

        }

        k=k+1+row-i;
        printf("\n");

    }

}


