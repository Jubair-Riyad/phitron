#include<stdio.h>
int main ()
{
    int n,m,o,p,q;
    scanf("%d", &n);
    m=n-1;
    o=1;
    p=1;
    q=(n*2)-1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <m; j++)
        {
           printf(" ");
        }
        for (int k = 0; k < o; k++)
        {
            printf("*");
        }
        m--;
        o=o+2;
        printf("\n");
    }

    for (int i = 1; i <=n; i++)
    {
        for (int l =1; l <p; l++)
        {
            printf(" ");
        }
        for (int h = 0; h < q; h++)
        {
            printf("*");
        }
    
        p++;
        q=q-2;
        printf("\n");
    }
    
    return 0;
}