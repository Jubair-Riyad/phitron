#include<stdio.h>
void fun(int a, int b)
{
    int sum=a+b;
    printf("%d", sum);
}
int main ()
{
    int a,b,sum;
    scanf("%d %d", &a,&b);
    fun(a,b);
    return 0;
}