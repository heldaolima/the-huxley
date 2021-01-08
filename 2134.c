#include <stdio.h>

void mostrar(double a[], int i, int tam, double tot)
{
    if (i == tam)
    {
        double media = tot/tam;
        printf("Media: %.2lf\n", media);
        return;
    }
    printf("Nota %d: %.1lf\n", i, a[i]);
    mostrar(a, i+1, tam, tot+a[i]);
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
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 5)
    {
        printf("Numero de notas invalido.\n");
    }
    else
    {
        double a[n];
        ler(a, 0, n);
        mostrar(a, 0, n, 0);
    }
    
    return 0;
}