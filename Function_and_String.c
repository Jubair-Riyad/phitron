#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    printf("%s", ar);
}
int main ()
{
    char ar[]="world";
    fun(ar);
    return 0;
}