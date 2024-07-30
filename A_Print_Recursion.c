#include<stdio.h>
int fun(int n, int m)
{
    if (m==n)return 0; 
    printf("I love Recursion\n");
    fun(n, m+1);
}    
int main ()
{
    int n,m=0;
    scanf("%d", &n);
    fun(n, m);
    return 0;
}