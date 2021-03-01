#include <stdio.h>

void impares(char p[])
{
    for (int i = 1; i < 8; i++){
        if (i % 2 != 0) printf("%c", p[i-1]);
    }
    printf("\n");
}

int main()
{
    char palavra[8];
    scanf("%s", palavra);
    impares(palavra);
    return 0;
}