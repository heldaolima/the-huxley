#include <stdio.h>

double reduz(double *a, double b)
{
    *a = *a - b;
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    reduz(&a, b);

    printf("%.2lf %.2lf\n", a, b);

    return 0;
}