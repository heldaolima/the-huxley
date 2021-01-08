#include <stdio.h>

int main()
{
    int competidores, voltas;
    scanf("%d %d", &competidores, &voltas);
     
    if (2 <= competidores && competidores <= 100 && 1 <= voltas && voltas <= 100){
        
        for (int i = 1; i <= competidores; i++){
            for (int c =1; c <= voltas; c++){
                int tempo;
                scanf("%d", tempo);
            }
        }
        
    }
    return 0;
}