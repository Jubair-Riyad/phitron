#include<stdio.h>
void fun(int a[], int n)
{
    a[0]=500;
}
int main ()
{
    int a[5]={ 2,3,4,5,6};
    fun(a,5);
    for (int i = 0; i <5; i++)
    {
        printf("%d ", a[i]);
    }
        
    return 0;
}