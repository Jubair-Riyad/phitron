#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int pos;
    for (int i =n-1; i>=0; i--)
    {   pos=i;
        if (pos%2==0)
        {
            printf("%d ", ara[i]);
        }
        
    }
    
    
    return 0;
}