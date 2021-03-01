#include <stdio.h>

int secundaria(int tam, int m[][tam], int l, int csec, int tot)
{
    if (l == tam) return tot;
    
    return secundaria(tam, m, l+1, csec-1, tot+m[l][csec]);
}

int principal(int tam, int m[][tam], int l, int c, int tot)
{
    if (l == tam) return tot;
    
    return principal(tam, m, l+1, c+1, tot+m[l][c]);
}

void ler(int tam, int m[][tam], int l, int c)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam) return;
    scanf("%d", &m[l][c]);
    ler(tam, m, l, c+1);
}

void fight(int tam, int Ryu[][tam], int Ken[][tam], int vryu, int vken, int qtd)
{
    if (qtd == 0)
    {
        if (vryu > vken)
        {
            printf("Ryu ganhou a batalha.\n");
        }
        else if (vken > vryu)
        {
            printf("Ken ganhou a batalha.\n");
        }
        else if (vken == vryu)
        {
            printf("Houve empate.\n");
        }

        return;
    }
    
    char movRyu, movKen;
    scanf(" %c", &movRyu);
    scanf(" %c", &movKen);

    int r, k; //definindo os valores

    if (movRyu == 'A')
    {
        r = principal(tam, Ryu, 0, 0, 0);
    }
    else if (movRyu == 'D')
    {
        r = secundaria(tam, Ryu, 0, tam-1, 0);
    }

    if (movKen == 'A')
    {
        k = principal(tam, Ken, 0, 0, 0);
    }
    else if (movKen == 'D')
    {
        k = secundaria(tam, Ken, 0, tam-1, 0);
    }
    
    if (movRyu == movKen && movRyu == 'A') //batalha
    {
        if (r > k) 
        {
            vken -= (r - k);
        }
        else if (k > r)
        {
            vryu -= (k - r);
        }
    }
    else if (movRyu == 'A' && movKen == 'D')
    {
        if (r > k)
        {
            vken -= ((r - k)/2);
        }
    }
    else if (movRyu == 'D' && movKen == 'A')
    {
        if (k > r)
        {
            vryu -= ((k - r)/2);
        }
    }
    
    fight(tam, Ryu, Ken, vryu, vken, qtd-1);
}

int main()
{
    int t, vryu, vken, qtd;
    scanf("%d %d %d", &t, &vryu, &vken);
    
    int Ryu[t][t], Ken[t][t];
    
    ler(t, Ryu, 0, 0);
    ler(t, Ken, 0, 0);

    scanf("%d", &qtd);

    fight(t, Ryu, Ken, vryu, vken, qtd);
    
    return 0;
}