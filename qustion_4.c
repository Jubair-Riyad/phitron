#include<stdio.h>
int Has_Return_Parameter(int a, int b)
{
    int sum=a+b;
    return sum;
}
int Has_Return_No_Parameter(void)
{
    int a[5]={5,9,8,7,6};
    int count_odd=0;
    for (int i = 0; i <5; i++)
    {
        if (a[i]%2!=0)
        {
            count_odd++;
        }
    }
    return count_odd;
}
void No_Return_Parameter(int x)
{
    printf("No Return + Parameter:");
    for (int i = 1; i <x; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }    
    printf("\n");
}
void No_Return_No_Parameter(void)
{
    char c[]= "Hello";
    printf("No Return + No Parameter: %s\n", c);
}
int main ()
{
    
    int sum = Has_Return_Parameter(20, 30);
    int count_odd = Has_Return_No_Parameter();
    No_Return_Parameter(10);
    No_Return_No_Parameter();

    printf("Has Return + Parameter: %d\n", sum);
    printf("Has Return + No Parameter: %d\n", count_odd);
    return 0;
}