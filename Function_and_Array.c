#include<stdio.h>
void fun(int x[], int n)
{
    for (int i = 0; i <n; i++)
    {
        printf("%d ", x[i]);
    }
    
}
int main ()
{
    int x[5]={2,4,6,8,9};
    fun(x, 5);
    return 0;
}