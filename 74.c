#include <stdio.h>

void busca(int a[], int i, int tam, int obj)
{
    if (i == tam)
    {
        return;
    }
    if (a[i] == obj)
    {
        printf("%d\n", i);
    }
    busca(a, i+1, tam, obj);
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
    int arr[100];
    ler(arr, 0, 100);
    int obj;
    scanf("%d", &obj);
    busca(arr, 0, 100, obj);
    return 0;
}