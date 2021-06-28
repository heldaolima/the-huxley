#include <stdio.h>

void copia(char senha[], char c[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        c[i] = senha[i];
    }
}

int bom(char senha[], char chute[], int tam, int j, int resp)
{
    if (j == tam) return resp;
    
    for (int i = 0; i < tam; i++)
    {
        if (senha[i] == chute[j])
        {
            resp++;
            break;
        } 
    }
    return bom(senha, chute, tam, j+1, resp);    
}

int excelente(char senha[], char chute[], int tam)
{
    int r = 0;
    for (int i = 0; i < tam; i++){
        if (senha[i] == chute[i])
        {
            senha[i] = '?';
            chute[i] = '!';
            r++;
        }
    }
    return r;
}

void advinhe()
{
    int n, e, b;
    scanf("%d", &n);

    char senha[n+1], chute[n+1];
    scanf(" %s", senha);
    scanf(" %s", chute);
    
    while (2)
    {
        char cop[n+1];
        copia(senha, cop, n);
        
        if (chute[0] == '0') break;
        
        e = excelente(cop, chute, n);
        
        if (e == n)
        {
            printf("(%d,0)\n", e);
            break;
        }
        
        b = bom(cop, chute, n, 0, 0);
        
        printf("(%d,%d)\n", e, b);
        scanf(" %s", chute);
    }
    return;
}

int main()
{
    int k;
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++) advinhe();

    return 0;
}