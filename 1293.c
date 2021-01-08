#include <stdio.h>

int altura(int especie, int nramos, int alt, int passo)
{
    if (alt == nramos)
    {
        return passo;
    }
    else
    {
        return altura(especie, nramos, alt*especie, passo+1);
    }
}

int main()
{
    int especie, nramos;
    scanf("%d%d", &especie, &nramos);
    printf("%d\n", altura(especie, nramos, 1, 0));
    return 0;
}