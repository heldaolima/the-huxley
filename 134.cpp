#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef struct Botas {
    int esquerdo;
    int direito;
} Botas;

int pares(map<int, Botas> botas)
{
    int counter = 0;
    map<int, Botas>::iterator it;

    for (it = botas.begin(); it != botas.end(); it++) {
        counter += min(it->second.esquerdo, it->second.direito);
    }

    return counter;
}

int main()
{
    int len = 0, i = 0, num;
    char pe;
    
    while (true) {
        cin >> len;

        if (len == -1)
            break;

        map<int, Botas> botas;
        for (i = 0; i < len; i++) {
            cin >> num >> pe;
            
            if (botas.count(num) == 0) {
                botas[num] = {0, 0};
            }
            
            if (pe == 'E') {
                botas[num].esquerdo++;
            }
            else if (pe == 'D')  {
                botas[num].direito++;
            }
        }

        cout << pares(botas) << "\n";
        botas.clear();
    }

    return 0;
}