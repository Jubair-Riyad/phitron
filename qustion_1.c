#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int m=n-1;
    int o=1;
    for (int i = 1; i <=(n*2)-1; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=o; k++)
        {
            printf("%d", k);
        }
        if (i<n)
        {
            m--;
            o=o+2;
        }
        else
        {
            m++;
            o=o-2;
        }
        printf("\n");
    }
    return 0;
}