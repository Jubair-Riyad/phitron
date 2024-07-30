#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a, max=INT_MIN;
    for (int i = 1; i<=n; i=i+1)
    {
        scanf("%d", &a);
        if (a>max)
        {
            max=a;
        }
        
    }
    printf("%d\n", max);
    
    return 0;
}