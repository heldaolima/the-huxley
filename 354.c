#include <stdio.h>

void pares(int n, int passo)
{
    if (passo > n)
    {
        return;
    }
    else
    {
        if (passo % 2 == 0)
        {
            printf("%d\n", passo);   
        }
        pares(n, passo+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pares(n, 0);
    return 0;
}