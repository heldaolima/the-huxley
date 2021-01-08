#include <stdio.h>

int main()
{
    int i = 0; 
    while(i == 0){
        int cont = 0;
        char nacionalidade, ocupacao;
        if (cont == 0){
            scanf("%c", &nacionalidade);
            cont ++;
        } else{
            scanf(" %c", &nacionalidade);
        }
        int quantidade, calibre;
        if (nacionalidade == 'B' || nacionalidade == 'E')
        {
            scanf(" %c %d%d", &ocupacao, &quantidade, &calibre);
            if(nacionalidade == 'E'){
                if (quantidade > 0){
                    printf("Barrado\n");
                }else{
                    printf("Liberado\n");
                }
            }else if (nacionalidade == 'B'){
                if (quantidade == 0){
                    printf("Liberado\n");
                } else{
                    if (ocupacao == 'M'){
                        printf("Liberado\n");
                    }else if (ocupacao == 'T'){
                        if(quantidade == 1 && calibre <= 22){
                            printf("Liberado\n");
                        } else{
                            printf("Barrado\n");
                        }
                    } else if(ocupacao == 'C'){
                        if (quantidade <= 2 && calibre <= 38){
                            printf("Liberado\n");
                        } else{
                            printf("Barrado\n");
                        }
                    } else{
                        if (quantidade > 0){
                            printf("Barrado\n");
                        }
                    }
                }
                
            }
        } else{
            printf("Fim\n");
            break;
        }
    }
    return 0;
}