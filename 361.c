#include <stdio.h>

int resp(int a[], int n)
{
    int menor = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < menor) menor = a[i];
    }
    return menor;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("%d\n", resp(a, n));

    return 0;
}