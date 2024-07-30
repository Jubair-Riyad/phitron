#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int even =0;
    int odd=0;

    for (int i = 0; i <n; i++)
    {
        scanf("%d", &ara[i]);        
    }
    for (int i = 0; i <n; i++)
    {
        if (ara[i]%2==0)
        {
            even=even+ara[i];
            
        }
        if (ara[i]%2!=0)
        {
            odd=odd+ara[i];
            
        }
            
    }
    printf("%d ", even);
    printf("%d ", odd);
    
    return 0;
}