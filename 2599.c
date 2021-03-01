#include <stdio.h>

void charmander(double m[][8], int l, int c, double menor, int mes, int dia)
{
    if (c == 8)
    {
        c = 0;
        l += 1;
    }
    if (l == 12)
    {
        //printf("menor: %.2lf mes: %d dia: %d\n", menor, mes, dia);
        //return;
        if (menor > 0.5)
        {
            printf("Proximo ano eu tento denovo...\n");
            return;
        }
        else
        {
            printf("O melhor dia e no ");
            if (dia == 0){
                printf("Primeiro ");
            }
            else if (dia == 1){
                printf("Segundo ");
            }
            else if (dia == 2){
                printf("Terceiro ");
            }
            else if (dia == 3){
                printf("Quarto ");
            }
            
            if (dia % 2 == 0)
            {
                printf("Sabado de ");
            }
            else{
                printf("Domingo de ");
            }
            
            if (mes == 0)
            {
                printf("Janeiro\n");
            }
            else if (mes == 1){
                printf("Fevereiro\n");
            }
            else if (mes == 2){
                printf("Marco\n");
            }
            else if (mes == 3){
                printf("Abril\n");
            }
            else if (mes == 4){
                printf("Maio\n");
            }
            else if (mes == 5){
                printf("Junho\n");
            }
            else if (mes == 6){
                printf("Julho\n");
            }
            else if (mes == 7){
                printf("Agosto\n");
            }
            else if (mes == 8){
                printf("Setembro\n");
            }
            else if (mes == 9){
                printf("Outubro\n");
            }
            else if (mes == 10){
                printf("Novembro\n");
            }
            else if (mes == 11){
                printf("Dezembro\n");
            }
            return;
        }
    }   

    if (m[l][c] < menor)
    {
        charmander(m, l, c+1, m[l][c], l, c);    
    }
    charmander(m, l, c+1, menor, mes, dia);
}

void ler(int nl, int nc, double m[][nc], int l, int c)
{
    if (c == nc)
    {
        c = 0;
        l += 1;
    }
    if (l == nl) return;
    
    scanf("%lf", &m[l][c]);
    ler(nl, nc, m, l, c+1);
}

int main()
{
    double m[12][8];
    ler(12, 8, m, 0, 0);
    charmander(m, 0, 1, m[0][0], 0, 0);
    
    return 0;
}