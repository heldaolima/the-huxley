#include <stdio.h>

void init(int m[][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i == 2 && j ==2) || (i ==3 && j == 5) || (i == 4 && (j == 1 || j == 2)))
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }
        }
    }
}

int passeio(int t[][8], int qtd, int lastL, int lastC)
{
    if (qtd > 0)
    {
        int mov;
        scanf("%d", &mov);
        
        if (mov == 1)
        {
            lastL -= 2;
            lastC  += 1;
        }

        else if (mov == 2)
        {
            lastL -= 1;
            lastC  += 2;
        }

        else if (mov == 3)
        {
            lastL += 1;
            lastC  += 2;
        }

        else if (mov == 4)
        {
            lastL += 2;
            lastC  += 1;
        }    

        else if (mov == 5)
        {
            lastL += 2;
            lastC  -= 1;
        }

        else if (mov == 6)
        {
            lastL += 1;
            lastC  -= 2;
        }

        else if (mov == 7)
        {
            lastL -= 1;
            lastC -= 2;    
        }

        else if (mov == 8)
        {
            lastL -= 2;
            lastC -= 1;
        }
        
        if (t[lastL][lastC] == 0) return 1 + passeio(t, qtd-1, lastL, lastC);
        else return 1;
        
    }
    return 0;
}

int main()
{
    int tab[8][8], qtd;
    init(tab);
    
    scanf("%d", &qtd);
    
    printf("%d\n", passeio(tab, qtd, 4, 4));
    
    return 0;
}