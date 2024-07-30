#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ar[]={a,b,c};
    int n=sizeof(ar)/sizeof(ar[0]);
    for (int i = 0; i <n-1; i++)
    {
        for (int j= i+1; j <n; j++)
        {
            if (ar[i]>ar[j])
            {
                int temp= ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
            
        }
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n%d\n%d\n%d\n", a,b,c);
    
    
    return 0;
}