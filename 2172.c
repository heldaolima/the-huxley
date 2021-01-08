#include <stdio.h>

int toupeiras(int qtd, int passo)
{
    if (passo > qtd)
    {
        return 0;
    }
    else
    {
        int tunel;
        scanf("%d", &tunel);
        if (tunel == -1)
        {
            return (passo * 2) + toupeiras(qtd, passo+1);
        }
        else
        {
            return toupeiras(qtd, passo+1);
        }
    }
}

int main()
{
    int qtd;
    scanf("%d", &qtd);
    printf("%d\n", toupeiras(qtd, 1));
    return 0;
}