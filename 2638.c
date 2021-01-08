#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ph;
    printf("Digite o pH da solucao:");
    scanf("%d", &ph);

    if (ph < 0 || ph > 14){
        printf("Valor deve estar entre 0 e 14.\n");
    } else if (ph == 7){
        printf("Essa solucao e neutra.\n");
    } else if (ph > 7 && ph <= 14){
        printf("Essa solucao e basica.\n");
    } else if (ph < 7){
        printf("Essa solucao e acida.\n");
    }
    
    return 0;
}