#include <stdio.h>

double mult(double a[], double b[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }
    return (a[tam-1] * b[tam-1]) + mult(a, b, tam-1);
     
}
void ler(double a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%lf", &a[i]);
    ler(a, i+1, tam);
}


int main()
{
    int qtd;
    scanf("%d", &qtd);
    double a[qtd], b[qtd], res;
        
    ler(a, 0, qtd);
    ler(b, 0, qtd);
    res = mult(a, b, qtd);
    printf("%.1lf\n", res);
    return 0;
}