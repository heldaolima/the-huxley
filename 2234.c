#include <stdio.h>

int solve(int a[], int i, int j, int tam, int cont)
{
    if (j == tam)
    {
        return cont;
    }
    if (a[i] > a[j])
    {
        cont = cont+1;
    }
    return solve(a, i, j+1, tam, cont);
}

int inversivel(int a[], int i, int j, int tam, int cont)
{
    if (i == tam)
    {
        return cont;
    }
    cont = cont + solve(a, i, j, tam, 0);
    return inversivel(a, i+1, j+1, tam, cont);
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
    int n, resp;
    scanf("%d", &n);
    
    int a[n];
    ler(a, 0, n);
    
    resp = inversivel(a, 0, 1, n, 0);
    printf("%d\n", resp);
    return 0;
}