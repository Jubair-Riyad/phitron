#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int j =i+1; j <n; j++)
        {
            if (ar[i]>ar[j])
            {
                int temp= ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    

    if (n%2==0)
    {
        for (int i = (n/2)-1; i <=n/2; i++)
        {
            printf("%d ", ar[i]);
        }
    }

    if (n%2!=0)
    {
        for (int i = (n+1)/2; i <=(n+1)/2; i++)
        {
            printf("%d ", ar[((n+1)/2)-1]);
        }
    }    
    return 0;
}