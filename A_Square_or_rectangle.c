#include<stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        if (m==n)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}