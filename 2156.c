#include <stdio.h>

int main()
{
    int volume, numero_de_trocas;
    
    scanf("%d", &volume);
    if (volume == 120){
        while (volume != 30){
            scanf("%d", &volume);
        }
    }

    while (volume < 0 || volume > 100){
        scanf("%d", &volume);
    }

    scanf("%d", &numero_de_trocas);
    while (numero_de_trocas < 0 || numero_de_trocas > 10){
        scanf("%d", &numero_de_trocas);
    }
        
        for (int i = 1; i <= numero_de_trocas; i++)
        {
            int troca;
            scanf("%d", &troca);
            if (volume + troca > 100){
                volume = 100;
            } else if (volume + troca < 0){
                volume = 0;
            } else{
                volume = volume + troca;
            }       
        }
    
    printf("%d\n", volume);
    
    return 0;
}