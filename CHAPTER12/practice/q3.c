//using pragma startup and pragma exit

#include<stdio.h>

void fun1();
void fun2();

# pragma startup fun1
# pragma exit fun2

int main()
{
    printf("\ninside main\n");
    return 0;
}
void fun1()
{
    printf("\ninside fun1\n");
}
void fun2()
{
    printf("\ninside fun2");
}
