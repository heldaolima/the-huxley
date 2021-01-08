#include <stdio.h>

void bubble(int arr[], int i, int fim)
{
    //printf("i(bubble): %d\n", i);
    if (i < (fim-1))
    {
        if (arr[i] > arr[i+1])
        {
            int aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
        }

        bubble(arr, i+1, fim);
    }
}

void sort(int arr[], int i, int tam)
{
    //printf("Tam: %d\n", tam);
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
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
    int n, max, min, medio, result;
    scanf("%d", &n);
    int nums[n];
    ler(nums, 0, n);
    sort(nums, 0, n);
    printf("%d %d %d\n", nums[0], nums[n-1], nums[(n)/2]);
    return 0;
}