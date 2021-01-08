#include <stdio.h>

int precos(int passo, int cont)
{
    if (passo > 5)
    {
        return cont;
    }
    else
    {
        double orig, pos, diferenca, desc, obj;
        scanf("%lf%lf", &orig, &pos);
        desc = 0.2;
        diferenca = orig - pos;
        obj = orig - (orig * 0.2);
        if (pos <= obj)
        {
            return precos(passo+1, cont+1);
        }
        else
        {
            return precos(passo+1, cont);
        }
        
    }
}

int main()
{
    int result = precos(1, 0);
    printf("%d\n", result);
    return 0;
}