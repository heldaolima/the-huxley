#include <stdio.h>

int labirinto(int n, int m, int lab[][m], int i, int j, int count, int best)
{
    if(i >= n) return count;

}

int main()
{
    int n = 0, m = 0, i = 0, j = 0;
    scanf("%d %d\n", &n, &m);

    char lab[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%c", &lab[i][j]);
            if (j == m-1) getchar();
        }
    }

    printf("%d\n", labirinto(n, m, lab, 0, 0, 0, 0));

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < m; j++)
    //         printf("%c", lab[i][j]);
    // printf("\n");
    // }
    
    return 0;
}