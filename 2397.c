#include <stdio.h>

int main()
{
    int numero;
    scanf("%d", &numero);

    double preco;
    double total = 0.0;
    if (1 <= numero && numero <= 5)
    {
        for (int i = 1; i <= numero; i++){
            int codigo, quantidade;
            scanf("%d %d", &codigo, &quantidade);
            if (1 <= quantidade && quantidade <= 500)
            {
                if (codigo == 1001){
                    preco = 1.50;
                } else if (codigo == 1002){
                    preco = 2.50;
                } else if (codigo == 1003){
                    preco = 3.50;
                } else if (codigo == 1004){
                    preco = 4.50;
                } else if (codigo == 1005){
                    preco = 5.50;
                }
                total = total + (preco * quantidade);
                
            }   
        }
        
        printf("%.2lf\n", total);
        
    }
    return 0;
}