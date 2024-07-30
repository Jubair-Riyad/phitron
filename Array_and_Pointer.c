#include<stdio.h>
int main ()
{
    int x[10]={11, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    printf("%d\n", x[0]);
    printf("%d\n", *x);
    printf("%d\n", *(x+1));
    printf("%d\n", *(1+x));
    printf("%d\n", 0[x]);
    return 0;
}