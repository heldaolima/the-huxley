#include <stdio.h>

void comparar(int a[], int o[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    if (a[i] == o[i])
    {
        printf("%d %d\n", a[i], i+1);
    }
    comparar(a, o, i+1, tam);
}

int iguais(int a[], int o[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    if (a[i] == o[i])
    {
        return 1+ iguais(a, o, i+1, tam);
    }
    return iguais(a, o, i+1, tam);
}


void bubble(int arr[], int i, int fim)
{
    //printf("i(bubble): %d\n", i);
    if (i < (fim-1))
    {
        if (arr[i] > arr[i+1])
        {
            int aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
        }

        bubble(arr, i+1, fim);
    }
}

void sort(int arr[], int i, int tam)
{
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
}

void ler(int n[], int o[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &n[i]);
    o[i] = n[i];
    ler(n, o, i+1, tam);
}

int main()
{
    int n, qtd;
    scanf("%d", &n);
    int nums[n], ord[n];
    ler(nums, ord, 0, n);
    sort(ord, 0, n);
    qtd = iguais(nums, ord, 0, n);
    printf("%d\n", qtd);
    comparar(nums, ord, 0, n);
    return 0;
}