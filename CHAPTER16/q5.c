//delete all vowels from sentence

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isVowel(char x)
{
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
        return 1;
    }
    else return 0;
}


void removeVowels(char*p)
{
    char *t=(char*)malloc((strlen(p)+1)*sizeof(char));
    int  j=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isVowel(p[i])==0)
        {
            t[j++]=p[i];
        }

    }
    t[j]='\0';
    strcpy(p,t);
    p=realloc(p,strlen(p)+1);

}














int main()
{
    char *p=(char*)malloc(1024*sizeof(char));
    printf("\nEnter the sentence:");
    scanf("%[^\n]s",p);
    p=realloc(p,strlen(p)+1);
    
    removeVowels(p);

    printf("\nremoved vowels\n%s",p);




    return 0;
}