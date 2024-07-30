#include<stdio.h>
int main ()
{
    long long int n,m,o;
    scanf("%lld %lld %lld", &n, &m, &o);
    if (n%o==0 && m%o==0)
    {
        printf("Both");
    }
    else if (n%o==0)
    {
        printf("Memo");
    }
    else if (m%o==0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    return 0;
}