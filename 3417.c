#include <stdio.h>

int contador(int obj, int i, int fim)
{
    if (i > fim)
    {
        return 0;
    }
    int num;
    scanf("%d", &num);
    if (num == obj)
    {
        return 1 + contador(obj, i+1, fim);
    }
    return contador(obj, i+1, fim);
}

void algo()
{
    int n;
    scanf("%d", &n);
    if (n == -1)
    {
        return;
    }
    printf("%d appeared %d times\n", n, contador(n, 1, 10));
    algo();
}

int main()
{
    algo();
    return 0;
}