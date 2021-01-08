#include <stdio.h>

int menor(int a[], int i, int tam, int men, int ind)
{
    if (i == tam)
    {
        printf("Menor valor: %d\n", men);
        return ind;
    }
    else if (i == 0)
    {
        return menor(a, i+1, tam, a[0], i);
    }
    else
    {
        if (a[i] < men)
        {
            return menor(a, i+1, tam, a[i], i);
        }
        return menor(a, i+1, tam, men, ind);
    }
}

void ler(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &a[i]);
    ler(a, i+1, tam);
}

int main()
{
    int n, indice;
    scanf("%d", &n);
    int a[n];
    ler(a, 0, n);
    indice = menor(a, 0, n, 0, 0);
    printf("Posicao: %d\n", indice);
    return 0;
}