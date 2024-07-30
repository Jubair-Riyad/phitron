#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
    double a,b;
    scanf("%lf %lf", &a, &b);

    double x=ceil(a);
    printf("%lf\n", x);

    double y=floor(a);
    printf("%lf\n", y);

    double z=round(a);
    printf("%lf\n", z);

    double w=round(b);
    printf("%lf\n", w);

    double p=sqrt(a); 
    printf("%lf\n", p);

    double q=pow(a,b);
    printf("%lf\n", q);

    double r=abs(b);
    printf("%lf\n", r);

    // abs value limit as like int, 
    // if it required long long int value 
    // it should be written like this
    // if (r<0)
    // {
    //     r=r*-1;
    // }  

    return 0;
}