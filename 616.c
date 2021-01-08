#include <stdio.h>

int ler(int c[], int i, int tam, int obj)
{
    if (i == tam)
    {
        return 0;
    }
    scanf("%d", &c[i]);
    if (c[i] == obj)
    {
        return 1 + ler(c, i+1, tam, obj);
    }
    return ler(c, i+1, tam, obj);
}

int main()
{
    int certo, comp[5], resp;
    scanf("%d", &certo);
    resp = ler(comp, 0, 5, certo);
    printf("%d\n", resp);
    return 0;
}