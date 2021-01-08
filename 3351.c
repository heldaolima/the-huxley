#include <stdio.h>

void multiplicar(int a[][3], int b[][3], int m[][3], int l, int c, int i)
{
    if (c == 3)
    {
        c = 0;
        l += 1;
        i += 1;
    }
    if (l == 3) return;
    m[l][c] = a[i][i] * b[l][c];
    multiplicar(a, b, m, l, c+1, i);
}

void ler(int m[][3], int l, int c)
{
    if (c == 3)
    {
        c = 0;
        l += 1;
    }
    if (l == 3) return;
    scanf("%d", &m[l][c]);
    ler(m, l, c+1);
}

int main()
{
    int a[3][3], b[3][3], mult[3][3];
    
    ler(a, 0, 0);
    ler(b, 0, 0);

    multiplicar(a, b, mult, 0, 0, 0);

    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            if (c != 2)
            {
                printf("%d ", mult[l][c]);
            }
            else
            {
                printf("%d", mult[l][c]);
            }
            
        }
        printf("\n");
    }

    return 0;
}