#include <stdio.h>

double menor(double a[], int i, int tam, double men)
{
    if (i == tam)
    {
        return men;
    }
    else if (i == 0)
    {
        return menor(a, i+1, tam, a[0]);
    }
    else if (a[i] < men)
    {
        return menor(a, i+1, tam, a[i]);
    }
    return menor(a, i+1, tam, men);
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
    double arr[qtd], resp;
    ler(arr, 0, qtd);
    resp = menor(arr, 0, qtd, 0);
    printf("%.1lf\n", resp);
    return 0;
}