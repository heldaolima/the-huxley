#include <stdio.h>

void mostrar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d ", a[i]);
    mostrar(a, i+1, tam);
}

void ler(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%d", &arr[i]);
        ler(arr, i+1, tam);
    }
}

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    if (n1 == 0)
    {
        printf("Erro - A lista deve ter pelo menos 1 elemento.\n");
        return 0;
    }
    int a[n1];
    ler(a, 0, n1);
    scanf("%d", &n2);
    if (n2 == 0)
    {
        printf("Erro - A lista deve ter pelo menos 1 elemento.\n");
        return 0;
    }
    int b[n2];
    ler(b, 0, n1);
    int c[n1+n2];
    mostrar(a, 0, n1);
    mostrar(b, 0, n2);
    printf("\n");
    return 0;
}