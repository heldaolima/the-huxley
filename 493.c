#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    double curr, menor = 0, count = 0, soma = 0, media = 0;

    for (i = 0; i < 9; i++) {
        scanf("%lf", &curr);
        if (curr < 0) {
            soma += curr;
            count++;
        }

        if (i == 0) 
            menor = curr;
        else if (curr < menor) 
            menor = curr;
    }
    


    printf("%.2lf\n%.2lf\n", menor, soma/count);

    return 0;
}