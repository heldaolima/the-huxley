#include <stdio.h>

int fat(int num) 
{
    if (num <= 1)
        return 1;
    
    return num * fat(num-1);
}

int primo(int num)
{
    int c = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            c++;
        }
    }

    if (c == 2) 
        return 1;
    else
        return 0;

}

int main()
{
    int mov, tam, i = 0, exp = 0, cur = 0, vale = 0, moedas = 0;
    scanf("%d %d", &mov, &tam);

    for (i = 0; i < mov; i++) {
        cur = i%tam;
        if (primo(cur)) {
            printf("%d ", cur);
            exp += cur;
        }
        if (cur == 7) vale++;
    }

    if (vale > 0) {
        moedas = fat(vale);
    }

    printf("\nExperiencia = %d Moedas = %d\n", exp, moedas);
    if (moedas == 0) {
        printf("Ja que nao achei moedas, vou na Torre\n");
        for (i = 1; i <= exp; i++) {
            if (i % 7 == 0) {
                printf("%d ", i);
                moedas += 30;
            }
        }
        if (moedas > 0)
            printf("\nConsegui %d moedas na Torre\n", moedas);
        else
            printf("\nDesisto.\n");
    }


    return 0;
}
