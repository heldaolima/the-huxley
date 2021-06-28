#include <stdio.h>

int main()
{
    int n;
    printf("Digite o valor inteiro:\n");
    scanf("%d", &n);

    printf("%d nota(s) de R$ 100,00\n", n/100);
    if (n/100 != 0) n = n%100;

    printf("%d nota(s) de R$ 50,00\n", n/50);
    if (n/50 != 0) n = n%50;

    printf("%d nota(s) de R$ 20,00\n", n/20);
    if (n/20 != 0) n = n%20;

    printf("%d nota(s) de R$ 10,00\n", n/10);
    if (n/10 != 0) n = n%10;

    printf("%d nota(s) de R$ 5,00\n", n/5);
    if (n/5 != 0) n = n%5;

    printf("%d nota(s) de R$ 2,00\n", n/2);
    if (n/2 != 0) n = n%2;

    printf("%d moeda(s) de R$ 1,00\n", n);
    
    return 0;
}