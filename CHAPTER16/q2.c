#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main()
{
    char*str[]={ 
                  "We will teach you how to...",
                  "Move a mountain",
                  "Level a building",
                  "Erase the past",
                  "Make a million",
                  "...all through C!"
              };
    
    char *str1=(char*)malloc(1024*sizeof(char));
    printf("\nEnter the String:");
    scanf("%[^\n]s",str1);
    str1=realloc(str1,strlen(str1)+1);

    for(int i=0;i<6;i++)
    {
       int x=strcmp(str1,str[i]);
     
       if(x==0)
       {
           printf("Str1 is same as str[%d]\n",i);
       }

    }











    return 0;
}
