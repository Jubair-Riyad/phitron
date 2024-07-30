#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int sum_primary=0;
    int sum_secondary=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i]==ar[j])
            {
                sum_primary=sum_primary+ar[i][j];
            }
            if (i+j==n-1)
            {
                sum_secondary=sum_secondary+ar[i][j];
            }
        }
    }
    int sum_differece = sum_primary-sum_secondary;
    int result=abs(sum_differece);
    printf("%d ", result);
    return 0;
}