#include <stdio.h>

typedef long long int lli;

int main()
{
    lli qtd, k;
    scanf("%lld %lld", &qtd, &k);

    printf("%lld\n", 1 + (qtd * k));
    return 0;
}
