#include <stdio.h>

int antihorario(int arr[], int n)
{
    for (int i = n; i > 0; i--) {
        if (arr[(i%n)]+1 == arr[(i-1)%n] || (arr[i%n] == n && arr[((i-1)%n)] == 1)) {
            continue;
        }
        else
            return 0;
    }
    return 1;

}

int horario(int arr[], int n)
{
    // printf("\nhorario\n");
    for (int i = 0; i < n; i++) {
        if (arr[(i%n)]+1 == arr[((i+1)%n)] || (arr[i%n] == n && arr[((i+1)%n)] == 1)) {
            continue;
        }
        else 
            return 0;
    }
    return 1;
}


int main()
{
    int cases, i = 0, j = 0, n = 0;
    scanf("%d", &cases);

    for (j = 0; j < cases; j++) {
        scanf("%d", &n);
        int arr[n];

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        if (horario(arr, n)) {
            printf("SIM, HORARIO\n");
        } else if (antihorario(arr, n)) {
            printf("SIM, ANTI-HORARIO\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}