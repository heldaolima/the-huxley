#include <stdio.h>

void imprimir(int a[], int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n) printf("%d ]\n", a[i]);
        else printf("%d ", a[i]);
    }
}

int remove(int a[], int b[], int tam, int obj)
{
    int cont = 0;
    for (int i = 0; i < obj; i++)
    {
        if (a[i] != obj)
        {
            b[cont] = a[i];
            cont++;
        }
    }
    return cont;
}

int main()
{
    int n, obj;
    scanf("%d %d", &n, &obj);

    if (n == 0) printf("[ ]\nA lista estah vazia - nao eh possivel remover elemento\n");
    else
    {
        int a[n], b[n-1], r;
        r = remove(a, b, n, obj);
        imprimir(a, n);
        if (r == 0) printf("Nao achamos o numero\n");
        else imprimir(b, n-1);
        
    }

    return 0;
}