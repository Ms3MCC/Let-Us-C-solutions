//traingle mess 


#include<stdio.h>
#include<math.h>

void dist(int,int,int,int,float*);
void area(int,int,int,int,int,int,float*);

int pos(int,int,int,int,int,int,int,int,float);


int main()
{
    int x,x1,x2,x3;
    int y,y1,y2,y3;
    float ar;
    int z;

    printf("\nEnter sides of the triangle:\n");

    printf("\nx1:");
    scanf("%d",&x1);

    printf("\ny1:");
    scanf("%d",&y1);

    printf("\n\nx2:");
    scanf("%d",&x2);

    printf("\ny2:");
    scanf("%d",&y2);

     printf("\n\nx3:");
    scanf("%d",&x3);

    printf("\ny3:");
    scanf("%d",&y3);

    area(x1,x2,x3,y1,y2,y3,&ar);

    printf("\nArea of triangle is:%.2f\n",ar);

    printf("\n\nto check if point is inside or outside the triangle:");

    printf("\nx:");
    scanf("%d",&x);

    printf("\ny:");
    scanf("%d",&y);

    z=pos(x,y,x1,y1,x2,y2,x3,y3,ar);
    if(z==1)
    {
        printf("\nPoint lies inside the triangle\n");
    }
    else
    {
        printf("\nPoint  doest not lies inside the triangle\n");
    }

    return 0;




}

void dis (int x1,int x2,int y1,int y2, float*j)
{
    float sqdis;

    sqdis=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);

    *j=sqrt(sqdis);

}
void area(int x1,int x2,int x3,int y1,int y2,int y3,float*j)
{

    float a,b,c;
    float s,sqarea;
    
    dis(x1,x2,y1,y2,&a);
    dis(x1,x3,y1,y3,&b);
    dis(x2,x3,y2,y3,&c);

    printf("\n%.2f,%.2f,%.2f",a,b,c);

    s=(a+b+c)/2;
    sqarea=s*(s-a)*(s-b)*(s-c);

    *j=sqrt(sqarea);


}

int pos(int x,int y,int x1,int y1,int x2,int y2,int x3,int y3,float ar)
{
    float ar1,ar2,ar3,art,ar4;

    printf("%d,%d,%d,%d\n",y1,y2,y3,y);
    printf("%d,%d,%d,%d\n",x1,x2,x3,x);

  

    area(x1, y1, x2, y2, x, y,&ar1);
	
	area(x1, y1, x3, y3, x, y,&ar2);
	
	area(x, y, x2, y2, x3, y3,&ar3);

    area(x1,x2,x3,y1,y2,y3,&ar4);

   
  
   
  

    art=ar1+ar2+ar3;
    printf("\n%.2f",ar1);
    printf("\n%.2f",ar2);
    printf("\n%.2f",ar3);
    printf("\n%.2f",ar4);
   
    
    printf("\n%.2f",art);
     printf("\n%.2f",ar);
    if(art==ar) //lies inside
    {
        return 1;
    }
    else 
    {
        return 0;
    }




}

