#include <stdio.h>

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
    //printf("Tam: %d\n", tam);
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
}

int solve(int a[], int b[], int i, int tam)
{
    if (tam == 0)
    {
        return 0;
    }
    if (a[i] == b[tam-1])
    {
        b[tam-1] = 0;
        return 1 + solve(a, b, i, tam-1);
    }
    return solve(a, b, i, tam-1);
}

void comp(int a[], int b[], int c[], int i, int j, int tam)
{
    if (i == tam)
    {
        return;
    }
    int teste = solve(a, b, i, tam);
    if (teste != 0)
    {
        c[j] = a[i];
        comp(a, b, c, i+1, j+1, tam);
    }
    comp(a, b, c, i+1, j, tam);
}

int comparar(int a[], int b[], int i, int j, int tam)
{
    printf("J: %d\n", j);
    if (i == tam)
    {
        return j;
    }
    int teste = solve(a, b, i, tam);
    if (teste != 0)
    {
        return comparar(a, b, i+1, j+1, tam);
    }
    return comparar(a, b, i+1, j, tam);
}

void mostrar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d ", a[i]);
    mostrar(a, i+1, tam);
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
    int a[n], b[n];
    ler(a, 0, n);
    ler(b, 0, n);
    int j = comparar(a, b, 0, 1, n);
    printf("j: %d\n", j);
    int c[j];
    comp(a, b, c, 0, 0, j);
    mostrar(b, 0, n);
    sort(c, 0, j);
    //mostrar(c, 0, j);
    printf("\n");
    return 0;
}