#include <stdio.h>

int multiplos(int n1, int n2, int passo, int cont)
{

    if (passo >= 50)
    {
        return cont;
    }
    else
    {
        if (passo % n1 == 0 && passo % n2 == 0)
        {
            return multiplos(n1, n2, passo+1, cont+1);
        }
        else
        {
            return multiplos(n1, n2, passo+1, cont);
        }
    }
}

int main()
{
    int n1, n2, result;
    scanf("%d%d", &n1, &n2);
    result = multiplos(n1, n2, 1, 0);
    printf("%d\n", result);
    return 0;
}