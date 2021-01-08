#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cont = 0;

    for (int i = 1; i <= n; i++){
        if(i % 3 == 0 && n % i == 0){
            cont++;
        }
    }
    printf("cont: %d\n", cont+1);
    return 0;
}