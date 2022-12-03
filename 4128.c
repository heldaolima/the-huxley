#include <stdio.h>

int ancest(int pessoas[], int pais[], int alvo, int passos) {
    if (passos <= 0)
        return pessoas[alvo];
     
    if (pais[alvo] == -1) 
        return -1;

    return ancest(pessoas, pais, pais[alvo], passos-1);
    
}

int main()
{
    int n, q, u, k, i = 0;
    
    scanf("%d", &n);
    int pessoas[n];
    
    int pais[n];
    pais[0] = -1;

    for (i = 0; i < n; i++) pessoas[i] = i;


    for (i = 1; i < n; i++)
        scanf("%d", &pais[i]);

    scanf("%d", &q);

    for (i = 0; i < q; i++) {
        scanf("%d %d", &u, &k);
        printf("%d\n", ancest(pessoas, pais, u, k));
    }

    return 0;
}