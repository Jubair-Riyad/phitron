#include<stdio.h>
void fun(int*ptr)
{
    // printf("%d\n", *ptr);
    *ptr=500;
}

int main ()
{
    int x=200;
    fun(&x);
    printf("%d", x);
    return 0;
}