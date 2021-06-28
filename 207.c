#include <stdio.h>

int menor_linha(int n, int m, int c[][m], int i, int j, int soma, int resp, int ind)
{
    printf("i: %d j: %d soma: %d resp: %d ind: %d\n", i, j, soma, resp, ind);
    if (j == m)
    {
        j = 0;
        if (i == 0)
        {
            resp = soma;
        }
        else if (soma < resp)
        {
            resp = soma;
            ind = i;
        } 
        i++;
        soma = 0;
    }
    
    if (i < n) return menor_linha(n, m, c, i, j+1, soma+c[i][j], resp, ind);

    return ind;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    int corrida[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &corrida[i][j]);
        }
    }
    printf("%d\n", menor_linha(n, m, corrida, 0, 0, 0, 0, 0)+1);

    return 0;
}