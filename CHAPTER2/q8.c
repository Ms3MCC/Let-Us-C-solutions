//interchange contents

#include<stdio.h>
#include<math.h>

int main()
{
    int c,d,m;

    printf("\nc:");
    scanf("%d",&c);

    printf("d:");
    scanf("%d",&d);

    m=c;
    c=d;
    d=m;

    printf("\n\nINTERCHANGING CONTENTS\n\n");
    printf("c:%d\n",c);
    printf("d:%d\n\n",d);


}