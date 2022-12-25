#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef struct boot {
    int num;
    char pe;
} bota;

void print_vec(vector<bota> vec, int len) 
{
    for (int i = 0; i < len; i++) {
        cout << "{ " << vec[i].num << ", " << vec[i].pe << " } ";
    }
    cout << "\n";
}

int pares(vector<bota> botas, int len)
{
    int counter = 0;
    for (int i = 0; i < len-1; i++) {
        if (botas[i].num == botas[i+1].num && 
            ((botas[i].pe == 'D' && botas[i+1].pe == 'E') || (botas[i].pe == 'E' && botas[i+1].pe == 'D'))
        ) {
            counter++;
        }
    }

    return counter;
}

bool compare_num(const bota b1, const bota b2) 
{
    return b1.num < b2.num;
}

int main()
{
    int len = 0, i = 0;

    while (true) {
        cin >> len;

        if (len == -1) {
            break;
        }

        vector<bota> botas(len);

        for (i = 0; i < len; i++) {
            scanf("%d %c\n", &botas[i].num, &botas[i].pe);
        }

        sort(botas.begin(), botas.end(), compare_num);
        
        // print_vec(botas, len);
        cout << pares(botas, len) << "\n";
    }

    return 0;
}