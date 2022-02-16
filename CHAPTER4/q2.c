//capital small or special symbol

#include<stdio.h>

int main()
{
    char x;
    int as;
    printf("enter x:");
    scanf("%c",&x);

    as=(int)x;

    printf("\nascii:%d\n",as);
    
   
     if(as>=65 && as<=90 )
    {
        printf("\nCAPITAL LETTER\n\n");
    }
    else if(as>=97 && as<=122 )
    {
        printf("\nsmalll letter\n\n");
    }
     else if( (as>=0 && as<=47) || (as>=58 && as>=64)|| (as>=91 && as<=96) || (as>=123 && as<=127))
    {
        printf("\nSpecial Symbol\n\n");
    }
    else if(as>=48 && as<=57 )
    {
        printf("\nDIGIT\n\n");
    }
    
    
    
}