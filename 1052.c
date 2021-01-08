#include <stdio.h>

int main()
{
    int diagonais; //(d(n-3)) / 2
    scanf("%d", &diagonais);

    int calculo1 = (diagonais - 3) *diagonais;
    int calculo2 = calculo1 / 2;

    printf("%d\n", calculo2);
    
    return 0;
}