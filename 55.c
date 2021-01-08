#include <stdio.h>

int ocorr(int a[], int i, int tam, int num)
{
    if (i == tam)
    {
        return 0;
    }

    if (a[i] == num)
    {
        return 1 + ocorr(a, i+1, tam, num);
    }
    return ocorr(a, i+1, tam, num);
}

int ler(int a[], int i, int tam)
{
    if (i == tam)
    {
        return a[i-1];
    }
    scanf("%d", &a[i]);
    ler(a, i+1, tam);
}

int main()
{
    int a[10], num, resp;
    num = ler(a, 0, 10);
    resp = ocorr(a, 0, 10, num);
    printf("O numero %d apareceu %d vezes\n", num, resp);
    return 0;
}