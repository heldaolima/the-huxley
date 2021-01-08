#include <stdio.h>

int main()
{
    int dias;   
    printf("Quantos dias de atraso?");
    scanf("%d", &dias);

    double total = dias * 0.75;
    printf("Total a ser pago: %f\n", total); 
    return 0;
}