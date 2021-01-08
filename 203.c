#include <stdio.h>

void procuratras(int p[], int sap, int sal, int tam)
{
    if (tam == 0)
    {
        return;
    }
    if (sap == tam-1)
    {
        p[tam-1] = 1;
        sap = sap - sal;    
    }
    procuratras(p, sap, sal, tam-1);
}

void procurafrente(int p[], int sap, int sal, int i, int tam)
{
    //printf("procura sap: %d sal: %d i: %d\n", sap, sal, i);    
    if (i == tam)
    {
        return;
    }
    if (sal < 0)
    {
        sal = sal * -1;
    }
    //printf("sap: %d\n", sap);
    if(sap == i)
    {
        p[i] = 1;
        sap = sap + sal; // ele so pula quando estiver na pedra
    }
    procurafrente(p, sap, sal, i+1, tam);
}

void pulos(int pedras[], int posinic[], int saltos[], int i, int tams, int tamp)
{
    if (i == tams)
    {
        return;
    }
    int sap = (posinic[i]-1);
    int sal = saltos[i];
    
    //printf("pulos sap: %d sal: %d i: %d\n", sap, sal, i);
    procurafrente(pedras, sap, sal, 0, tamp); //olha todos os casos de i antes de ir ao próximo i
    procuratras(pedras, sap, sal, tamp);
    pulos(pedras, posinic, saltos, i+1, tams, tamp);
}

void iniciar_pedras(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    a[i] = 0;
    iniciar_pedras(a, i+1, tam);
}

void mostrar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d\n", a[i]);
    mostrar(a, i+1, tam);
}

void ler(int a[], int b[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d%d", &a[i], &b[i]);
    ler(a, b, i+1, tam);
}

int main()
{
    int np, ns; //numero de pedras e numero de sapos
    scanf("%d%d", &np, &ns);
    
    int pedras[np], sapos[ns], saltos[ns];
    
    iniciar_pedras(pedras, 0, np);
    
    ler(sapos, saltos, 0, ns);

    pulos(pedras, sapos, saltos, 0, ns, np);
    mostrar(pedras, 0, np);   
    return 0;
}