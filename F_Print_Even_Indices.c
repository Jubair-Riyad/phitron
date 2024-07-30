#include<stdio.h>
int fun(int ar[], int n, int ind)
{
    if (ind<0)return 0;    
    if (n%2==0)
    {
        ind=ind-1;
        printf("%d ", ar[ind]);
    }
    else if (n%2!=0)
    { 
        printf("%d ", ar[ind]);
        ind =ind-1;
    }
    fun(ar,n,ind-1);
}
int main ()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ind =n-1;
    fun(ar,n,ind);
    return 0;
}