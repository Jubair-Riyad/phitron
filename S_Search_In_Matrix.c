#include<stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int ar[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int x;
    int flag=0;
    scanf("%d", &x);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x==ar[i][j])
            {
                flag=1;
            }
            
        }
    }
    if (flag==1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}