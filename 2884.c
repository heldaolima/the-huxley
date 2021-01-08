#include <stdio.h>

void proc(double a[], int i, int tam, int obj)
{
    if (i == tam)
    {
        return;
    }

    if (a[i] == obj)
    printf("%d\n", i+1);
    proc(a, i+1, tam, obj);
    
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
    double a[100], n;
    printf("Digite a sequencia de numero: \n");
    ler(a, 0, 100);
    scanf("%lf", &n);
    printf("Indice no qual o numero desejado aparece: \n");
    proc(a, 0, 100, n);
    return 0;
}