#include <stdio.h>

int sequencia(int a[], int n, int i)
{
    int resp = 1;
    for (int j = i+1; j < n*2; j++)
    {
        j = ((j % n) + n) % n;
        if (a[j] > a[i])
        {
            i++;
            i = ((i % n) + n) % n;
            resp++;
        } 
        else break;
    }
    return resp;
}

int carrossel(int a[], int n, int i, int maior)
{
    if (i == n) return maior;
    
    int seq = sequencia(a, n, i);

    if (seq > maior) return carrossel(a, n, i+1, seq);
    else return carrossel(a, n, i+1, maior);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("%d\n", carrossel(a, n, 0, 0));

    return 0;
}