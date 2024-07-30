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

    int flag =1;
    if (m!=n)
    {
        flag=0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i]==ar[j])
            {
                continue;
            }
            else if (ar[i][j]!=0)
            {
                flag=0;
            }    
        }   
    }
    if (flag==1)
    {
        printf("Diagonal Matrix\n");
    }
    else
    {
        printf("Not Diagonal Matrix\n");
    }
    return 0;
}