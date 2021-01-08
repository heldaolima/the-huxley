#include <stdio.h>

/*
Uma empresa resolveu dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o 
programa que calculará os reajustes. Faça um programa em Java que recebe o salário de um colaborador e reajuste-o
segundo o seguinte critério: Salários até R$ 280,00 (incluindo) : aumento de 20%. Salários entre R$ 280,00 e 
R$ 700,00 : aumento de 15%. Salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%.  Salários de R$ 1500,00 em 
diante : aumento de 5%.
*/

int main(){
    
    double salario;
    scanf("%lf", &salario);

    double porcent;
    if (salario <= 280){
        porcent = 0.2;
    } else if (salario > 280 && salario <= 700){
        porcent = 0.15;
    } else if (salario > 700 && salario <= 1500){
        porcent = 0.1;
    } else{
        porcent = 0.05;
    }

    salario = (salario * porcent) + salario;
    
    printf("%.2lf\n", salario);
    return 0;
}