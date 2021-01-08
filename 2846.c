#include <stdio.h>

int main()
{
    double tot = 0.0;
    int controca = 0;
    printf("Insira a quantidade e valor de cada presente:\n");
    for (int i = 1; i <= 6; i++)
    {
        double valor;
        int quant;
    
        scanf("%lf %d", &valor, &quant);
        if (quant == 1){
            tot = tot + 0;
        } else{
            int troca = quant - 1;
            controca = controca + troca;
            tot = tot + (troca * valor);
        }
    }
    printf("Numero de presentes a serem trocados: %d\n", controca);
    if (tot < 800){
        printf("Voce NAO PODERA adquirir o ar condicionado com as trocas\n");
    }else{
        printf("Voce PODERA adquirir o ar condicionado com as trocas\n");
    }
    
    return 0;
}