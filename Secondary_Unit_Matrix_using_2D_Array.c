#include<stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d", &m,&n);
    int ar[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int flag = 1;
    if (m!=n)
    {
        flag=0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (i+j==n-1)
            {
               if (ar[i][j]!=1)
               {
                flag=0;
               }
               else
               {
                continue;
               }              
               
            }
           if (ar[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if (flag==1)
    {
        printf("Unit Matrix\n");
    }
    else
    {
        printf("Not Unit Matrix\n");
    }
    return 0;
}