#include<stdio.h>
void fun(int ar[],int n, int ind)
{
    if(ind>=n)return;
    printf("%d\n", ar[ind]);
    fun(ar, n,ind+1);
}
int main ()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ind=0;
    fun(ar,n,ind);
    return 0;
}