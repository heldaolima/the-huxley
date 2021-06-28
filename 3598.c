#include <stdio.h>

int main()
{
    int m, a, b, c, maior;
    scanf("%d %d %d", &m, &a, &b);
    c = m - (a+b);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior)
    {
        maior = c;
    }
    printf("%d\n", maior);

    return 0;
}