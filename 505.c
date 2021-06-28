#include <stdio.h>

void rotacionar(int arr[], int tam, int r)
{
    for (int i = 0; i < tam; i++)
    {
        int aux = (((i+r % tam) + tam) % tam);
        printf("aux: %d    ", aux);
        printf("%d\n", arr[aux]);
    }
}

int main()
{
    int n, r;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &r);

    rotacionar(arr, n, r);

    return 0;
}