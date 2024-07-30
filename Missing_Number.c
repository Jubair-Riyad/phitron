#include<stdio.h>
int main ()
{
    int n, m=4;
    scanf("%d", &n);
    int ar[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        int sum =0;
        int ans=0;
        int result=0;
        for (int j =1; j<m; j++)
        {
            sum=sum+ar[i][j];
            ans=ar[i][0];
            result=ans-sum;
        }
        printf("%d\n", result);
    }  
    return 0;
}
