#include <stdio.h>
#include <math.h>

void quadrados(double mai, double men, int obj)
{
    double quadr1, quadr2, result;
    quadr1 = pow(mai, 2);
    quadr2 = pow(men, 2);
    result = quadr1 - quadr2;
    
    if (result == obj)
    {
        printf("%.0lf - %.0lf\n", quadr1, quadr2);
        return;
    }
    quadrados(mai+1, men+1, obj);
}

void algoritmo()
{
    int n;
    scanf("%d", &n);
    
    if (n == 0)
    {
        return;
    }
    quadrados(1, 0, n);
    algoritmo();
}

int main()
{
    algoritmo();
    return 0;
}