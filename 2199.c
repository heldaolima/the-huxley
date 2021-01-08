#include <stdio.h>
#include <math.h>

//ARREDONDANDO PARA BAIXO

//TE VENCI!

int fatorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fatorial(num-1);
    }
}

int ambrosio(int num, int passo)
{
    if (num <= 3)
    {
        return 1;
    }
    int fat = fatorial(passo-1);

    double result = pow(3.0, passo);
    
    if (result > num)
    {
        return fat;
    }

    if (result == num)
    {
        return fatorial(passo);
    }
    else
    {
        return ambrosio(num, passo+1);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int result = ambrosio(num, 1);
    printf("%d\n", result);
    return 0;
}