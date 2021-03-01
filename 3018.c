#include <stdio.h>

int main()
{
    double val, money;
    scanf("%lf %lf", &val, &money);

    printf("Você conseguiu colocar %.2lf litros!\n", money/val);
    return 0;
}