#include <stdio.h>

double enfeites(int passo)
{
    if (passo > 3)
    {
        return 0.0;
    }
    else
    {
        int qtd;
        double valor;
        scanf("%d%lf", &qtd, &valor);
        return (qtd * valor) + enfeites(passo+1);
    }
}

int main()
{
    int valorarvore;
    double calc, tot;
    scanf("%d", &valorarvore);
    calc = enfeites(1);
    tot = valorarvore+calc;
    printf("%.2lf\n", tot); //total
    printf("%.2lf\n", tot/21);
    return 0;
}