#include <stdio.h>

int main()
{
    int i, j, n, m, count_l = 0, maximo = 0, count_c = 0;
    scanf("%d %d", &n, &m);

    int fazenda[n][m];

    for (i = 0; i < n; i++) {
        count_l = 0;
        for (j = 0; j < m; j++) {
            scanf("%d", &fazenda[i][j]);
            count_l += fazenda[i][j];
        }
        
        if (count_l > maximo) maximo = count_l;
    }

    for (j = 0; j < m; j++) {
        count_c = 0;
        for (i = 0; i < n; i++) {
            count_c += fazenda[i][j];
        }
        if (count_c > maximo) maximo = count_c;
    }

    printf("%d\n", maximo);
}