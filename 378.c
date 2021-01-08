#include <stdio.h>

int main()
{
    int cont = 0;
    for(int i = 1; i <= 6; i++){
        int ponto;
        scanf("%d", &ponto);
        cont = cont + ponto;
    }
    if (cont >= 100){
        printf("Classificado\n");
    } else{
        printf("Eliminado\n");
    }
    return 0;
}