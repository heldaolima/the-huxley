#include <stdio.h>

// QUALQUER ORDEM!!
void bubble(char arr[], int i, int fim)
{
    if (i < (fim-1))
    {
        if (arr[i] > arr[i+1])
        {
            int aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
        }

        bubble(arr, i+1, fim);
    }
}

void sort(char arr[], int i, int tam)
{
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
}

int vogal(char c)
{
    if (c == 65 || c == 69 || c == 73|| c == 79 || c == 85) return 1;
    else return 0;
}

int main()
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);

    if (a >= 65 && a <= 90 && b >= 65 && b <= 90 && c >= 65 && c <= 90)
    {
        char seq[3] = {a, b, c};
        sort(seq, 0, 3);
        
        if (seq[0]+1 == seq[1] && seq[1]+1 == seq[2])
        {
            if (vogal(a) || vogal(b) || vogal(c)) printf("Sequência quase perfeita.\n");
            else printf("Sequência perfeita.\n");
        }
        
        else if (seq[0]+2 == seq[1] && seq[1]+2 == seq[2])
        {
            if (vogal(a) || vogal(b) || vogal(c)) printf("Bissequência quase perfeita.\n");
            else printf("Bissequência perfeita.\n");
        }

        else if (seq[0]+3 == seq[1] && seq[1]+3 == seq[2])
        {
            if (vogal(a) || vogal(b) || vogal(c)) printf("Trissequência quase perfeita.\n");
            else printf("Trissequência perfeita.\n");
        }
        
        else printf("Só umas letras ai...\n");
    }
    else printf("Etiquetas erradas!\n"); 


    return 0;
}