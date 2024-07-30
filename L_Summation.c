#include<stdio.h>
long long int fun(long long int ar[], int n, int ind)
{
    if (ind==n)return 0;

    return (ar[ind]+fun(ar, n, ind+1));
}
int main ()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    int ind=0;
    long long int result = fun(ar, n, ind);
    printf("%lld", result);
    return 0;
}
