#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* extract(const char*s,int pos,int n)
{
    char *q=(char*)malloc(sizeof(char));

    int i=pos-1;
    int count=0;
    if(n==0)
    {
        while(s[i]!='\0')
        {
            q[count++]=s[i++];
        }
    }
    else
    {
        while(count<n)
        {
            q[count++]=s[i++];
        }

    }
   
    return q;
        


}





// int main()
// {
//   int pos,n;
//   char *p=(char*)malloc(sizeof(char));  // here compiler ensures that single space to which p is pointing is empty but not other spaces surronding it so when we add elements to memory after the memory to which pointer is pointing there is a chance we might overwrite something
//   printf("\nEnter the String:");
//   scanf("%[^\n]s",p);

//   printf("\nEnter the position from which you want substring to be extracted:");
//   scanf("%d",&pos);
//   printf("\nEnter the number of Characters you want to be extracted\n(spaces will be counted)\nfor entire string enter 0:\n");
//   scanf("%d",&n);

//   char *ex=extract(p,pos,n);
//   printf("\n%s\n",ex);


//     return 0;
// }

int main()
{
  int pos,n;
  char *p=(char*)malloc(1024*sizeof(char));// ensures 1024 spaces are empty
  printf("\nEnter the String:");
  scanf("%[^\n]s",p);
  p = realloc(p, strlen(p) + 1);

  printf("\nEnter the position from which you want substring to be extracted:");
  scanf("%d",&pos);
  printf("\nEnter the number of Characters you want to be extracted\n(spaces will be counted)\nfor entire string enter 0:\n");
  scanf("%d",&n);

  char *ex=extract(p,pos,n);
  printf("\n%s\n",ex);


    return 0;

}