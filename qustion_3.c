#include<stdio.h>
int count_before_zero(int n)
{
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count=0;
    for (int i = 0; i<n; i++)
    {
        if (ar[i]!=0)
        {
            count++;
        } 
        else
        {
            break;
        }     
    }
    
    return count;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int count= count_before_zero(n);
    printf("%d", count);
    return 0;
}