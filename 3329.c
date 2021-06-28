#include <stdio.h>
#include <math.h>

int main()
{
    //denominador: ax^n - by^m
    double x, y, a, b, n, m;
    scanf("(%lf, %lf)", &x, &y);

    scanf("%lf*x^%lf - %lf*y^%lf", &a, &n, &b, &m);
    
    if (a*pow(x, n)-b*pow(y, m) == 0)
    {
        printf("a função não está definida em (%.0lf,%.0lf) .-.\n", x, y); 
    }
    else printf("a função está definida em (%0.lf,%.0lf)\n", x, y);

    return 0;
}