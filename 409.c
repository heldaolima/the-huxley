#include <stdio.h>

int serieMiguelito(int indice, int passo, int total)
{
    if (passo == indice)
    {
        return total;
    }
    else
    {
        if (passo % 2 != 0)
        {
            return serieMiguelito(indice, passo+1, total+4);
        }
        else
        {
            return serieMiguelito(indice, passo+1, total+1);
        }
    }
}

int main()
{
    int num, result;
    scanf("%d", &num);
    result = serieMiguelito(num, 1, 3);
    printf("%d\n", result);
    return 0;
}