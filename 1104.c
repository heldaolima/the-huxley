#include <stdio.h>

void soma(int a[], int b[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d ", a[i]+b[i]);
    soma(a, b, i+1, tam);
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
    int a[10], b[10], result;
    ler(a, 0, 10);
    ler(b, 0, 10);
    soma(a, b, 0, 10);
    printf("\n");
    return 0;
}