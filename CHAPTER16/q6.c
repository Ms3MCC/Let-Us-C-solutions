//remove the from sentence

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void removeWord(char *p,char*q)
{
    int l=0;
    char *t=(char*)malloc(1024*sizeof(char));

    for(int i=0;i<strlen(p);i++)
    {
        char *word=(char*)malloc(1024*sizeof(char));
        
        int k=0;
        int initial=i;

        for(int j=initial;p[j]!=' ';j++)
        {
            word[k++]=p[j];
            i++;

        }
        // printf("\n%d\n",strcmp(word,q));

       if(strcmp(word,q)!=0)
        {
           for(int j=0;j<strlen(word);j++)
           {
               t[l++]=word[j];

           }
           t[l++]=' ';
        }

        
    }
    t[l]='\0';
    strcpy(p,t);
    p=realloc(p,strlen(p)+1);

}








int main()
{
    char *p=(char*)malloc(1024*sizeof(char));
    printf("\nEnter the sentence:");
    scanf("%[^\n]s",p);
    p=realloc(p,strlen(p)+1);

    char *q=(char*)malloc(1024*sizeof(char));
    printf("\nEnter the word you want to remove in lowercase:");
    scanf("%s",q);
    q=realloc(q,strlen(q)+1);

    removeWord(p,q);

    printf("\n%s removed from sentence\n%s\n",q,p);
}