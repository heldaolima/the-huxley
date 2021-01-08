#include <stdio.h>

int mai(int a[], int i, int tam, int maior)
{
    if (a[i] > tam || i == tam)
    {
        return maior;
    }

    else if (a[i] > maior)
    {
        return mai(a, i+1, tam, a[i]);
    }      
    return mai(a, i+1, tam, maior);
}

void repet(int a[], int b[], int i, int tam, int ult, int cont, int j)
{
    if (i == tam)
    {
        return;
    }
    if (a[i] == ult)
    {
        cont = cont+1;
        b[j] = cont;
    }
    else
    {
        b[j] = cont;
        cont = 1;
        j = j+1;
    }

    repet(a, b, i+1, tam, a[i], cont, j);
}

void mostra(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d\n", a[i]);
    mostra(a, i+1, tam);
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
    int nums[n], qtd[n];
    ler(nums, 0, n);
    repet(nums, qtd, 1, n, nums[0], 1, 0);
    printf("%d\n", mai(qtd, 1, n, qtd[0]));
    return 0;
}