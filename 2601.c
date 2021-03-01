#include <stdio.h>

int analise_secundaria(char m[][3], int i, int j, char ob)
{
    if (i == 3)
    {
        if (ob == 'X') //eduardo
        {
            printf("Eduardo ");
        } 
        if (ob == 'O') //leonardo
        {
            printf("Leonardo ");
        }
        printf("ganhou o jogo na diagonal secundaria.\n");
        return 1;
    }
    
    if (m[i][j] == '*' || ob == '*') return 0;

    else if (m[i][j] == ob) return analise_secundaria(m, i+1, j-1, ob);
    
    else return 0;
}

int analise_principal(char m[][3], int i, int j, char ob)
{
    if (j == 3)
    {
        if (ob == 'X') //eduardo
        {
            printf("Eduardo ");
        } 
        if (ob == 'O') //leonardo
        {
            printf("Leonardo ");
        }
        printf("ganhou o jogo na diagonal principal.\n");
        return 1;
    }
    
    if (m[i][j] == '*' || ob == '*') return 0;

    else if (m[i][j] == ob) return analise_principal(m, i+1, j+1, ob);
    
    else return 0;
}

int analise_coluna(char m[][3], int i, int j, char ob, int resp)
{
    if (i == 3)
    {
        if (resp == 3)
        {
            if (ob == 'X') //eduardo
            {
                printf("Eduardo ");
            } 
            if (ob == 'O') //leonardo
            {
                printf("Leonardo ");
            }
            printf("ganhou o jogo na coluna %d.\n", j+1);
            return 1;            
        }
        i = 0;
        j += 1;
    }

    if (j == 3)
    {
        return 0; //empate
    }

    if (m[i][j] == '*')
    {
        return analise_coluna(m, 0, j+1, '?', 0);
    }

    else
    {
        if (ob == '?' || ob == '*') return analise_coluna(m, i+1, j, m[i][j], 1);
        else
        {
            if (m[i][j] == ob) return analise_coluna(m, i+1, j, ob, resp+1);
            else return analise_coluna(m, 0, j+1, m[0][j+1], 1);
        }     
    } 
}

int analise_linha(char m[][3], int i, int j, char ob, int resp)
{
    if (j == 3)
    {
        if (resp == 3)
        {
            if (ob == 'X') //eduardo
            {
                printf("Eduardo ");
            } 
            if (ob == 'O') //leonardo
            {
                printf("Leonardo ");
            }
            printf("ganhou o jogo na linha %d.\n", i+1);
            return 1;
        }
        j = 0;
        i += 1;
    }
    if (i == 3)
    {
        return 0; // empate;
    }

    
    if (m[i][j] == '*')
    {
        return analise_linha(m, i+1, 0, '?', 0);
    }

    else
    {
        if (ob == '?' || ob == '*') return analise_linha(m, i, j+1, m[i][j], 1);
        else
        {
            if (m[i][j] == ob) return analise_linha(m, i, j+1, ob, resp+1);
            else return analise_linha(m, i+1, 0, m[i+1][0], 1);
        }
         
    }
}

void rodada(char m[][3])
{
    char simb;
    int l, c;
    scanf(" %c %d %d", &simb, &l, &c);
    
    if ((l < 0 || l > 2) || (c < 0 || c > 2))
    {
        printf("O Dark Souls afetou sua cabeça? Jogue dentro das demarcações do jogo.\n");
    }

    else if (m[l][c] != '*')
    {
        if (simb == 'X') printf("Eduardo ");
        else if (simb == 'O') printf("Leonardo ");
        printf("não trapacei ou então vamos voltar a jogar Dark Souls.\n");
    }
    else
    {
        m[l][c] = simb;
        if (simb == 'X') printf("Eduardo ");
        else if (simb == 'O') printf("Leonardo ");
        printf("efetuou sua jogada com sucesso.\n");
    }
}

void ler(int n, char m[][n], int i, int j)
{
    if (j == n)
    {
        j = 0;
        i++;
    }

    if (i < n)
    {
        scanf("%c", &m[i][j]);
        getchar();
        ler(n, m, i, j+1);
    }
}

int main()
{
    char sit[3][3];

    ler(3, sit, 0, 0);

    int j, result = 0;
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {
        rodada(sit);
        result = analise_linha(sit, 0, 1, sit[0][0], 1);
        if (result != 0) break;
        else
        {
            result = analise_coluna(sit, 1, 0, sit[0][0], 1);
            if (result != 0) break;
            else
            {
                result = analise_principal(sit, 1, 1, sit[0][0]);
                if (result != 0) break;
                else
                {
                    result = analise_secundaria(sit, 1, 1, sit[0][2]);
                    if (result != 0) break;
                    else
                    {
                        if (i == j-1)
                        {
                            printf("Nem no jogo da velha conseguimos ganhar algo, vamos voltar para o Dark Souls.\n");
                        }
                    }
                }
            }
        }

    }
    
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++)
        {
            if (c == 2) printf("%c\n", sit[l][c]);
            else printf("%c ", sit[l][c]);
        }
    }

    return 0;
}