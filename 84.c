#include <stdio.h>

void imprimir(int m[][4])
{
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void init(int m[][4], int i, int j)
{
    if (j == 4)
    {
        j = 0;
        i++;
    }
    if (i < 4)
    {
        m[i][j] = 0;
        init(m, i, j+1);
    }
}

void trafego(int car[][4], int caminhao[][4], int bus[][4])
{
    int o=1, d=1, t=1, contBH = 0, contBR = 0;
    while (o != 0 && d != 0 && t != 0)
    {
        scanf("%d %d %d", &o, &d, &t);
        if (o == 1) contBH++;
        
        if (t == 1) car[o-1][d-1] += 1;
        
        else if (t == 2) caminhao[o-1][d-1] += 1;
        
        else if (t == 3)
        {
            bus[o-1][d-1] += 1;
            if (o == 4 && (d == 2 || d == 4))
            {
                contBR++;
            }
        } 
    }
    
    printf("Automovel:\n");
    imprimir(car);
    
    printf("Caminhao:\n");
    imprimir(caminhao);

    printf("Onibus:\n");
    imprimir(bus);

    printf("Origem Belo Horizonte: %d\n", contBH);
    printf("Onibus: Brasilia - Petropolis ou Barbacena: %d\n", contBR);
}

int main()
{
    int car[4][4];
    int caminhao[4][4];
    int bus[4][4];

    init(car, 0, 0);
    init(caminhao, 0, 0);   
    init(bus, 0, 0);
    
    trafego(car, caminhao, bus);

    return 0;
}