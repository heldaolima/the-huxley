#include <stdio.h>

void derivada(int *coe, int *exp)
{
    *coe = exp*coe;
    *exp = exp-1;
}

void programa(int mon)
{
    int coe[mon], exp[mon];
    char inc[mon];

    for (int i = 0; i < mon; i++)
    {
        scanf("%d %c %d", &coe[i], &inc[i], &exp[i]);
        if (inc[i] == exp[i] && inc[i] == 0) coe[i] = 0;
        
        else derivada(&coe[i], &exp[i]);
    }

}

int main()
{
    int n;
    scanf("%d");
    
    while (n != 0)
    {
        programa(n);
    }

    return 0;
}