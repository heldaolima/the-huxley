#include <stdio.h>

int main()
{
    double usd, icms, produto, frete, frete2, import;
    scanf("%lf%lf%lf%lf", &usd, &icms, &produto, &frete);
    
    double aliquota = icms/100;
    
    
    printf("%.2lf\n", usd);
    
    double prodcon = usd * produto;
    printf("%.2lf\n", prodcon);
    
    double fretecon = usd * frete;
    printf("%.2lf\n", fretecon); 
   
    double total = prodcon + fretecon;
    printf("%.2lf\n", total);

    if (produto >= 2500){
        frete2 = 0;
    } else{
        frete2 = fretecon;
    }
    
    if (produto < 2500){
        import = total * 0.6;
    } else{
        import = prodcon * 0.6;
    }
    printf("%.2lf\n", import);

    double final = (prodcon + frete2 + import) / (1 - aliquota);
    double icms2 = final * aliquota;
    printf("%.2lf\n", icms2);

    double totalimpostos = import + icms2;
    printf("%.2lf\n", totalimpostos);

    double totalapagar = totalimpostos + total;
    printf("%.2lf\n", totalapagar);

    if (frete2 == 0){
        printf("Impostos calculados sem o frete\n");
    }else{
        printf("Impostos calculados com o frete\n");
    }
    return 0;
}