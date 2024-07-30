#include<stdio.h>
int fun(int n)
{
    if (n==0)return 0;
    int x=n%10;
    fun(n/10);
    printf("%d ", x);
    
}
int main ()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i <a; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    
    return 0;
}