#include <stdio.h>

int main()
{
    int x, y, n, i=0, c;
    scanf("%d %d %d", &n, &x, &y);

    for (i = 0; i < n; i++) {
        scanf("%d", &c);
        printf("%c", ((c*x)+y) % 127);
    }

    return 0;
}