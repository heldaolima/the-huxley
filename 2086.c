#include <stdio.h>

int contn(int a[], int i, int tam, int obj)
{
    if (i == tam)
    {
        
        return 0;
    }
    if (a[i] == obj)
    {
        return 1 + contn(a, i+1, tam, obj);
    }
    return contn(a, i+1, tam, obj);
}


int pegar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    scanf("%d", &a[i]);
    if (a[i] == -1)
    {
        return -1;
    }
    return pegar(a, i+1, tam);
}

void ler()
{
    int a[1000];
    int para = pegar(a, 0, 1000);
    if (para == -1)
    {
        return;
    }
    int n, resp;
    scanf("%d", &n);
    resp = contn(a, 0, 1000, n);
    printf("%d appeared %d times\n", n, resp);
    ler();
}

int main()
{
    ler();
    return 0;
}