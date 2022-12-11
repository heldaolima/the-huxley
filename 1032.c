#include <stdio.h>

int tocas(int buracos[], int visited[], int n, int i, int j, int counter)
{
    if (visited[j]) {
        ++counter;
        int k = j;
        while (visited[k] && k < n) k++;
        if (k >= n) return counter;
        return tocas(buracos, visited, n, i, k, counter);
    }

    if (i >= n)
        return counter;
    
    
    else {
        visited[j] = 1;
        return tocas(buracos, visited, n, i+1, buracos[j], counter);
    }
}

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    int buracos[n], visited[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &buracos[i]);
        visited[i] = 0;
    }

    printf("%d\n", tocas(buracos, visited, n, 0, 0, 0));

    return 0;
}