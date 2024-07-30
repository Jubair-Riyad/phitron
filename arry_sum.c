#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int sum=0;
    for (int i = 0; i <n; i++)
    {
         sum = sum+ara[i];        
    }
    printf("%d ", sum);
    
    
    return 0;
}