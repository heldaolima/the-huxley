#include <stdio.h>
/*
Betina trabalha em um escritório de advocacia e todos os dias analisa vários processos. 
Sabendo que ela cumpre um expediente diário de 8h, escreva um programa que receba como entrada quantos minutos 
ela leva para analisar cada processo, e exiba o total de processos revisados em um dia de trabalho. 
(Dica: Uma hora tem 60 minutos)
*/


int main() {
    int procHora;
    scanf("%d", &procHora);
    
    int dia = 60 * 8;
    int total = dia / procHora;
    
    printf("%d", total);
	return 0;
}