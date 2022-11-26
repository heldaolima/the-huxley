#include <stdio.h>

enum com {
    L, // y - 1
    R, // y + 1
    U, // x - 1
    D  // x + 1
};

int main()
{
    int n, x, y, i = 0, count[4], flagX = 0, flagY = 0;

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

    if (x >= 0 && x-count[D] <= 0) flagX = 1;
    else if (x <= 0 && x+count[U] >= 0) flagX = 1;

    if (y >= 0 && y-count[R] >= 0) flagY = 1;
    else if (y <= 0 && y+count[L] >= 0) flagY = 1;

    // printf("x-count[d]: %d\n", x-count[D]);
    // printf("x+count[u]: %d\n", x-count[U]);
    // printf("x-count[R]: %d\n", x-count[R]);
    // printf("x-count[L]: %d\n", x-count[L]);

    if (flagX && flagY) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}
