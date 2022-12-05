#include <stdio.h>

typedef long long int lli;

int main()
{
    lli i = 0, n, count_par = 0, count_impar = 0, curr;
    scanf("%lld", &n);

    for (i = 0; i < n; i++) {
        scanf("%lld", &curr);
        (curr % 2 == 0) ? count_par++ : count_impar++;
    }

    printf("%lld\n", count_impar * count_par);
    return 0;
}