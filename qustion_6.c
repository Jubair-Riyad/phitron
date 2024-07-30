// #include<stdio.h>
// int fun(int n)
// {
//     n=20;
//     return n;
// }
// int main ()
// {
//     int n=10;
//     fun(n);
//     printf("%d", n);
//     return 0;
// }
#include<stdio.h>
int fun(int *n)
{
    *n=50;
    return *n;
}
int main ()
{
    int n=10;
    fun(&n);
    printf("%d", n);
    return 0;
}