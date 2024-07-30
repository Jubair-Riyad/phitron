#include<stdio.h>
int fun(int n, int m)
{
    if(m==n+1)return 0;
    printf("%d\n", m);
    fun(n,m+1);
}
int main ()
{
    int n,m=1;
    scanf("%d", &n);
    fun(n,m);
    return 0;
}