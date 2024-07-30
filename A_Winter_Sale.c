#include<stdio.h>
int main ()
{
    float n,m;
    scanf("%f %f", &n, &m);
    float price=(100*m)/(100-n);
    printf("%0.2f", price); 
    return 0;
}