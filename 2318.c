#include <stdio.h>

int vergonha(int bebidas)
{
    if (bebidas == 0)
    {
        return 0;
    }
    else if(bebidas == 1)
    {
        return 1;
    }
    else
    {
        return (vergonha(bebidas - 1) + vergonha(bebidas-2));
    }
}

int main()
{
    double vtroy, vgab;
    int btroy, bgab, tresult, gresult;
    scanf("%lf%d", &vtroy, &btroy);
    scanf("%lf%d", &vgab, &bgab);
    tresult = vergonha(btroy);
    gresult = vergonha(bgab);
    
    if (vtroy > tresult)
    {
        printf("Nao foi dessa vez!! Troy nao teve coragem o suficiente.\n");
    }
    else
    {
        printf("Esse pode ser o comeco de algo novo!! Troy vai cantar!!\n");
    }
    
    if (vgab > gresult)
    {
        printf("Nao foi dessa vez!! Gabriella nao teve coragem o suficiente.\n");
    }
    else
    {
        printf("Esse pode ser o comeco de algo novo!! Gabriella vai cantar!!\n");
    }
    return 0;
}

//se vtroy/vgab > vergonha: deu ruim 