#include <stdio.h>

void ate_num(int num, int passo)
{
    if (passo > num)
    {
        return;
    }
    else
    {
        if (passo != num)
        {
            printf("%d ", passo);
        }
        else
        {
            printf("%d", passo);
        }
        
        ate_num(num, passo+1);
    }
}

void escadinha(int num, int passo)
{
    if (passo > num)
    {
        return;
    }
    else
    {
        ate_num(passo, 1);
        if (passo != num)
        {
            printf("\n");
        }
        escadinha(num, passo+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    escadinha(n, 1);
    return 0;
}