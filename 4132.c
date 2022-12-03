#include <stdio.h>

enum com {
    L, // y - 1
    R, // y + 1
    U, // x - 1
    D  // x + 1
};

int main()
{
    int n, x, y, i = 0, count[4];

    for (i = 0; i < 4; i++) count[i] = 0;

    scanf("%d", &n);
    char comandos[n+1];

    scanf("%s", comandos);
    scanf("%d %d", &x, &y);

    for (i = 0; i < n; i++) { 
        switch (comandos[i])
        {
            case 'L':
                count[L] += 1; break;
            case 'R':
                count[R] += 1; break;
            case 'U':
                count[U] += 1; break;
            case 'D':
                count[D] += 1; break;

            default: break;
        }
    }

    // printf(" L: %d\n R: %d\n U: %d\n D: %d\n", count[L], count[R], count[U], count[D]);

    if (
        ((x > 0 && x - count[D] <= 0) || (x < 0 && x + count[U] >= 0) || x == 0) && 
        ((y > 0 && y - count[R] <= 0) || (y < 0 && y + count[L] >= 0) || y == 0)
    ) 
        printf("YES\n");
    else 
        printf("NO\n");
    
    return 0;
}
