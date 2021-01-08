#include <stdio.h>
#include <stdlib.h>
//recursiva

void ler(double parada, double total, int cont)
{
    double qtd;//printf("qtd: %lf total: %lf cont: %d\n", qtd, total, cont);
    scanf("%lf", &qtd);
    double multa = 12.89;
    double nqtd, ntot;
    
    if (qtd == 999)
    {
        printf("%.2lf\n", total);
        printf("%d\n", cont);
        return;
    }
    else
    {
        if (qtd > 2)
        {
            nqtd = qtd-2;
            ntot = nqtd * multa;
            ler(qtd, total+ntot, cont+1);
        }
        else
        {
            ler(qtd, total, cont);
        }
        
    }
}

int main()
{
    ler(0.0, 0.0, 0);
    return 0;
}


/*
int main()
{   
    int cont = 0;
    double quant_carros = 0.0;
    double preco = 12.89;
    double total = 0.0;

    while (quant_carros != 999){
        scanf("%lf", &quant_carros);
        if (quant_carros > 2){
            if (quant_carros != 999){
                double nova_quant = quant_carros - 2;
                total = total + (nova_quant * preco);
                cont++;
            }
        }
    }

    printf("%.2lf\n", total);
    printf("%d\n", cont);
    
    return 0;
}
*/