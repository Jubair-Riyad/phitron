#include<stdio.h>
int main ()
{
    int x=20;
    printf("%p\n", &x);//adress of x
    int*p=&x;
    printf("%d\n", *p);//value pointer(x)
    *p=200;
    printf("%d\n", x);//value replace by dereference of x
    printf("%p\n", &x);//adress of x
    return 0;
}