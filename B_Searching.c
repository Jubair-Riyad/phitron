#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int x, a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int ans=-1;
    for(int i=0; i<n; i++)
    {
    
        if(x==a[i])
        {
            ans=i;
            break;
        }              
       
    }
    printf("%d", ans);
    return 0;
}