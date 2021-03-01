#include <stdio.h>

void imprimir(int l, int c, char m[][c])
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++)
        {
            if (j == c-1) printf("%c\n", m[i][j]);
            else printf("%c ", m[i][j]);
        }
    }
    printf("\n");
}

int corrigir(int n, int obj)
{
    if (n < 0) return obj-1;
    else if (n == obj) return 0;
    else return n;
}

int checar_frutas(int l, int c, char m[][c])
{
    int resp = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == 'O') resp++;
        }
    }
    return resp;
}

int sem_paredes(int i, int j, int k, char m[][j], char movs[], int nfrutas, int frutas, int l, int c)
{
    if (c == j)
    {
        c = 0;
        l++;
    }

    if (movs[k] == '\0' || checar_frutas(i, j, m) == 0)
    {
        imprimir(i, j, m);
        if (frutas == nfrutas) printf("Parabéns, você venceu!\n");
        return frutas;
    }
    
    int n;
    if (m[l][c] == '#')
    {
        if (movs[k] == 'N')
        {
            n = l-1;
            n = corrigir(n, i);
            if (m[n][c] != '%')
            {
                if (m[n][c] == 'O') frutas++;
                m[l][c] = '.';
                m[n][c] = '#';
                return sem_paredes(i, j, k+1, m, movs, nfrutas, frutas, n, c);
            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'S')
        {
            n = l+1;
            n = corrigir(n, i);
            if (m[n][c] != '%')
            {
                if (m[n][c] == 'O') frutas++;
                m[l][c] = '.';
                m[n][c] = '#';
                return sem_paredes(i, j, k+1, m, movs, nfrutas, frutas, n, c);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'L')
        {
            n = c+1;
            n = corrigir(n, j);
            if (m[n][c] != '%')
            {
                if (m[l][n] == 'O') frutas++;
                m[l][c] = '.';
                m[l][n] = '#';
                return sem_paredes(i, j, k+1, m, movs, nfrutas, frutas, l, n);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'O')
        {
            n = c-1;
            n = corrigir(n, j);
            if (m[l][n] != '%')
            {
                if (m[l][n] == 'O') frutas++;
                m[l][c] = '.';
                m[l][n] = '#';
                return sem_paredes(i, j, k+1, m, movs, nfrutas, frutas, l, n);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
    }   
    else return sem_paredes(i, j, k, m, movs, nfrutas, frutas, l, c+1);
}

int com_paredes(int i, int j, int k, char m[][j], char movs[], int nfrutas, int frutas, int l, int c)
{
    if (c == j)
    {
        c = 0;
        l++;
    }

    if (movs[k] == '\0' || checar_frutas(i, j, m) == 0)
    {
        imprimir(i, j, m);
        if (frutas == nfrutas) printf("Parabéns, você venceu!\n");
        return frutas;
    }

    if (m[l][c] == '#') 
    {
        if (movs[k] == 'N')
        {
            if (m[l-1][c] != '%' && l-1 >= 0)
            {
                if (m[l-1][c] == 'O') frutas++;
                m[l][c] = '.';
                m[l-1][c] = '#';
                return com_paredes(i, j, k+1, m, movs, nfrutas, frutas, l-1, c);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'S')
        {
            if (m[l+1][c] != '%' && l+1 < i)
            {
                if (m[l+1][c] == 'O') frutas++;
                m[l][c] = '.';
                m[l+1][c] = '#';
                return com_paredes(i, j, k+1, m, movs, nfrutas, frutas, l+1, c);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'L')
        {
            if (m[l][c+1] != '%' && c+1 < j)
            {
                if (m[l][c+1] == 'O') frutas++;
                m[l][c] = '.';
                m[l][c+1] = '#';
                return com_paredes(i, j, k+1, m, movs, nfrutas, frutas, l, c+1);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
        else if (movs[k] == 'O')
        {
            if (m[l][c-1] != '%' && c-1 >= 0)
            {
                if (m[l][c-1] == 'O') frutas++;
                m[l][c] = '.';
                m[l][c-1] = '#';
                return com_paredes(i, j, k+1, m, movs, nfrutas, frutas, l, c-1);

            }
            else
            {
                imprimir(i, j, m);
                printf(" - GAME OVER - \n");
                return frutas;
            }
        }
    }   
    else return com_paredes(i, j, k, m, movs, nfrutas, frutas, l, c+1);

}

void ler(int l, int c, char m[][c])
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++)
        {
            scanf(" %c", &m[i][j]);
        }
    }
}

int main()
{
    int i, j, tipo, resp, nfrutas;
    scanf("%d %d", &i, &j);
    
    char jogo[i][j], movs[70];
    ler(i, j, jogo);

    scanf("%d", &tipo);
    scanf(" %s", movs);
    
    nfrutas = checar_frutas(i, j, jogo);

    if (tipo == 1)
    {
        resp = com_paredes(i, j, 0, jogo, movs, nfrutas, 0, 0, 0);
    }
    else if (tipo == 2)
    {
        resp = sem_paredes(i, j, 0, jogo, movs, nfrutas, 0, 0, 0);
    }
    
    printf("Numero de frutas comidas: %d\n", resp);

    return 0;
}