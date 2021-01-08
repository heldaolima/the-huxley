#include <stdio.h>
//euler
double fatorial(double num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }
}

double euler(double num, double passo, double tot)
{
    if (passo == num)
    {
        return tot;        
    }
    else
    {
        return euler(num, passo+1.0, tot+(1/fatorial(passo)));
    }
}

int main()
{
    double num;
    scanf("%lf", &num);
    
    double result = euler(num, 0.0, 0.0);
    printf("%.15lf\n", result);

    return 0;
}