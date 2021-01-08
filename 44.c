#include <stdio.h>

void inter(int a[], int b[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }

    if (a[i] >= a[0] && a[i] >= a[1] && a[i] >= a[2])
    {
        b[0] = a[i];
        inter(a, b, i, tam-1);
    }
    else if (a[i] <= a[0] && a[i] <= a[1] && a[i] <= a[2])
    {
        b[1] = a[i];
        inter(a, b, i, tam-1);
    }
    else
    {
        b[2] = a[i];
    }
    inter(a, b, i+1, tam);
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
    int nums[3];
    int res[3] = {0, 0, 0};
    ler(nums, 0, 3);
    inter(nums, res, 0, 3);
    printf("%d\n", res[2]);
    return 0;
}