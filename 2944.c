#include <stdio.h>

void ler(int m[][9], int l, int c)
{
    if (c == 9)
    {
        c = 0;
        l += 1;
    }
    if (l == 9) return;
    scanf("%d", &m[l][c]);
    ler(m, l, c+1);
}

void batalha(int jogA[][9], int jogB[][9], int rods, int rodadas, int contJogA, int contJogB)
{
    if (rods == rodadas)
    {   
        if (contJogA > contJogB) printf("O jogador A venceu\n");
        else if (contJogB > contJogA) printf("O jogador B venceu\n");
        else printf("Empate");
        
        return;
    }

    char l;
    int lin, col;
    scanf(" %c%d", &l, &col);
    col -= 1;
    
    if (l == 'A') lin = 0;
    else if (l == 'B') lin = 1;
    else if (l == 'C') lin = 2;
    else if (l == 'D') lin = 3;
    else if (l == 'E') lin = 4;
    else if (l == 'F') lin = 5;
    else if (l == 'G') lin = 6;
    else if (l == 'H') lin = 7;
    else if (l == 'I') lin = 8;

    if (rods % 2 == 0) //joga A
    {
        if (jogB[lin][col] == 1)
        {
            contJogA += 1;
        }
    }
    else //joga B
    {
        if (jogA[lin][col] == 1)
        {
            contJogB += 1;
        }
    }

    batalha(jogA, jogB, rods+1, rodadas, contJogA, contJogB);
}

int main()
{
    int rodadas;
    scanf("%d", &rodadas);
    
    int jogA[9][9], jogB[9][9];
    ler(jogA, 0, 0);
    ler(jogB, 0, 0);

    batalha(jogA, jogB, 0, rodadas, 0, 0);

    return 0;
}