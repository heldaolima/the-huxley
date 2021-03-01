#include <stdio.h>

struct caracs{
    int idade;
    char sexo;
    char olhos;
    char cabelo;
};

int main()
{
    struct caracs h;
    
    int cont = 0;
    int idade_maior = 0;
    double muie = 0;
    
    while (2)
    {
        int num;
        scanf("%d", &num);
        
        if (num == -1) break;
        else h.idade = num;

        if (h.idade > idade_maior) idade_maior = h.idade;

        scanf(" %c %c %c", &h.sexo, &h.cabelo, &h.olhos);
        
        if (h.sexo == 'f' && (h.idade >= 18 && h.idade <= 35) && h.olhos == 'v')
        {
            muie++;
        }
        cont++;
    }

    double porc = (muie*100)/cont;   
    printf("Mais velho: %d\nMulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%%\n", idade_maior, porc);


    return 0;
}