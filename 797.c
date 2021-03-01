#include <stdio.h>
#include <string.h>
#include <math.h>


//nao consigo mexer com as strings;
int check(double obj, double num)
{
    if (num == obj) return 1;
    if (num > obj) return -1;
    check(obj, num+1);
}

void print(int tam, char m[][tam], int l, int c)
{
    if (l == tam)
    {
        l = 0;
        c += 1;
    }
    if (c == tam)
    {
        printf("\n");
        return;
    }

    printf("%c", m[l][c]);
    print(tam, m, l+1, c);
}

void matriz(int tam, char m[][tam], char f[], int l, int c, int i)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }

    if (l == tam) return;
    m[l][c] = f[i];
    
    matriz(tam, m, f, l, c+1, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    getchar();
    for (int i = 0; i < n; i++)
    {
        double tam, raiz;
        int chec, size;
        char frase[500];
        if (i == 0){
            getchar();
        }
        

        fgets(frase, 500, stdin);
        
        tam = strlen(frase);
        printf("tam: %lf\n", tam);
        raiz = sqrt(tam-1);
        printf("raiz: %lf\n", raiz);
        
        chec = check(raiz, 2);
        //printf("check: %d\n", chec);

        if (chec == -1)
        {
            printf("INVALIDO\n");
        }
        else
        {       
            size = (int) raiz;
            char m[size][size];

            matriz(size, m, frase, 0, 0, 0);
            print(size, m, 0, 0);
        }
    }

    return 0;
}