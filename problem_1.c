#include<stdio.h>
#include<stdlib.h>
void my_abs(int n)
{
    int a= abs(n);
    printf("%d", a);
}
int main ()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}