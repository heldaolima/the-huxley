#include <stdio.h>

int maquinas(int objetivo, int velo, int nmaquinas, int tot)
{
    
    tot = nmaquinas * velo;
    if (tot >= objetivo)
    {
        return 0;
    }
    else
    {
        return 1 + maquinas(objetivo, velo + 100, nmaquinas, tot);
    }
}

int main()
{
    int euros, veloinic, nmaquinas, result;
    scanf("%d%d%d", &euros, &veloinic, &nmaquinas);
    result = maquinas(euros, veloinic, nmaquinas, 0);
    printf("%d\n", result);

    return 0;
}