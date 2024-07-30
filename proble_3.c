#include<stdio.h>
void count_odd(int n)
{
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if (ar[i]%2!=0)
        {
            count++;
        }
    }
    printf("%d", count);
}

int main ()
{
    int n;
    scanf("%d", &n);
    count_odd(n);
    return 0;
}