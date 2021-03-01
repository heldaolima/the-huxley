#include <stdio.h>

int adicionar(int a[], int i, int fim)
{
    int resp = 0;
    for (int j = i; j <= fim; j++)
    {
        resp += a[j];
    }
    return resp;
}

int analise(int a[], int prim, int pos, int tam)
{
    int resp = 0;
    for (int i = pos+1; i < tam; i++)
    {
        if (a[i] > prim)
        {
            prim = a[i];
            resp++;
        }
        else break;
    }
    return resp;
}

void interv(int a[], int n, int i, int mai, int inic, int fim)
{
    if (i == n)
    {
        printf("%d %d %d\n", inic+1, fim+1, mai);
        return;
    }

    int cresceu, soma;
    cresceu = analise(a, a[i], i, n);
    soma = adicionar(a, i, i+cresceu);
    
    if (soma > mai) return interv(a, n, i+1, soma, i, i+cresceu);
    
    else return interv(a, n, i+1, mai, inic, fim); 
}

void ler(int a[], int n)
{
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    ler(a, n);
    
    interv(a, n, 0, 0, 0, 0);

    return 0;
}