#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    int sml= INT_MAX, ind;
    for(int i=1; i<=n; i++){
        
        if(a[i]<sml)
        {
            sml=a[i];
            ind = i;            
        }        
    }
    printf("%d %d \n", sml, ind);
    return 0;
}