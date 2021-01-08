//Huxley 841

/*
Dados três números em ponto flutuante queremos saber quantos deles estão acima da média aritmética.
*/

#include <stdio.h>

int main()
{
double  n1, n2, n3;
printf("Primeiro: ");
scanf("%lf", &n1);
printf("Segundo: ");
scanf("%lf", &n2);
printf("Terceiro: ");
scanf("%lf", &n3);

double media = (n1 + n2 + n3) / 3;
printf("MÉDIA: %f\n", media);

int cont = 0;
if (n1 > media){
    cont = cont + 1;
} if (n2 > media){
    cont = cont + 1;
} if (n3 > media){
    cont = cont + 1;
}

printf("CONT: %d\n", cont);


}