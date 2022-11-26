#include <stdio.h>

int a = 0, b = 0, c = 0, d = 0;

int f(int i)
{
    if (i == 0) return a;
    if (i == 1) return b;
    if (i == 2) return c;
    if (i == 3) return d;

    return 9 * f(i-1) + 2*f(i-2) - 5 * f(i-3) + f(i-4);
}

int main() {
    int n;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &n);

    printf("%d\n", f(n));

    return 0;
}