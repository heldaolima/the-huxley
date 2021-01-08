#include <stdio.h>

void horario(int a[], int i, int tam)
{
    if (i == tam-1)
    {
        return;
    }
    if (i == 0)
    {
    }
    if (a[i]+1 == a[i+1])
    {
        printf("1\n");
    }
    horario(a, i+1, tam);
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
    int a[n];
    ler(a, 0, n);
    horario(a, 0, n);
    return 0;
}