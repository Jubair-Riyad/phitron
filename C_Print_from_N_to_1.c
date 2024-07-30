#include<stdio.h>
int fun(int n, int s)
{
    if(n==0)return 0;
    printf("%d", n);
    if (n!=1)
    {
        printf(" ");
    }
    fun(n-1,s);
}
int main ()
{
    int n, s=1;
    scanf("%d", &n);
    fun(n,s);
    return 0;
}