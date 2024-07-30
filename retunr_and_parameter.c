#include<stdio.h>

int sum(int x, int y)
{
    int sum=x+y;
}

int main ()
{
    int s=sum(10,20);
    printf("%d\n", s);
    printf("%d", sum(10,20));
    return 0;
}