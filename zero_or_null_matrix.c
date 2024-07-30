#include<stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d",&m, &n);
    int elemnt = m*n;
    int ar[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
        
    }
    int count=0;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j]==0)
            {
                count++;
            }
            
        }
    }
    if (count==elemnt)
    {
        printf("Zero or Null Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }
    
    return 0;
}