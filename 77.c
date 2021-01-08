#include <stdio.h>

void mostra(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("[%d]", a[i]);
    mostra(a, i+1, tam);
}

void bubble(int a[], int i, int tam)
{
    if (i < (tam-1))
    {
        if (a[i] > a[i+1])
        {
            int aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
        }
        bubble(a, i+1, tam);
    }

}

void ordenar(int a[], int i, int tam)
{
    if (i < (tam-1))
    {
        bubble(a, i, tam);
        ordenar(a, i, tam-1);
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
    int n;
    scanf("%d", &n);
    int nums[n];;
    ler(nums, 0, n);
    ordenar(nums, 0, n);
    mostra(nums, 0, n);
    printf("\n");
    return 0;
}