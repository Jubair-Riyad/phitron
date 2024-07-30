#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ind;
    for(int i=0; i<n; i++)
    {
        ind=i;
        if(a[i]<=10){
            printf("A[%d] = %d\n",ind, a[i]);
        }
        
    }
    return 0;
}