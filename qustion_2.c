#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int m=n-1;
    int o=1;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <o; k++)
        {
            printf("%d", o);
        }
        m--;
        o++;        
        printf("\n");
    }
    return 0;
}