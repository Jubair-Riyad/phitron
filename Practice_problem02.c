#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d ", &a, &b);
    int sum = a+b;
    int min = a-b;
    int mul = a*b;
    float div = a*1.0/b;
    printf("%d\n", sum);
    printf("%d\n", min);
    printf("%d\n", mul);
    printf("%0.2f\n", div);
    return 0;
}