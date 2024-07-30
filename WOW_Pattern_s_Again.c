#include<stdio.h>
int main ()
{
    int n,m,o,p;
    scanf("%d", &n);
    m=n-1;
    o=1;
    p=o+2;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" ");
        }
        if (i%2!=0)
        {
            for (int k = 0; k < o; k++)
            {
                printf("^");
            }
            o=o+4;
        }
        else
        {
            for (int l = 0; l < p; l++)
            {
                printf("*");
            }
            p=p+4;
        }
        m--;       
        printf("\n");
    }
    
    return 0;
}