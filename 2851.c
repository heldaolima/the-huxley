#include <stdio.h>

void pares_inv(int a[], int tam)
{
    if (tam == 0)
    {
        return;
    }
    if (a[tam-1] % 2 == 0)
    {
        printf("%d ", a[tam-1]);
    }
    pares_inv(a, tam-1);
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
    int arr[10];
    printf("Digite os 10 numeros inteiros:\n");
    ler(arr, 0, 10);
    printf("Numeros pares na ordem inversa:\n");
    pares_inv(arr, 10);
    printf("\n");
}