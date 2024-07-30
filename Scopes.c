#include<stdio.h>
//global
int x;
void fun()
{
    scanf("%d", &x);
}

int main ()
{
    fun();
    printf("%d\n",x);
    printf("adress of x: %p", &x);
    return 0;
}