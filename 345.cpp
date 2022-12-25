#include <iostream>
#include <ctype.h>
#include <math.h>
#include <string>

using namespace std;

double calculadora(string s)
{
    int i = 0;
    char sym;
    string n1 = "", n2 = "";
    double num1, num2;
    
    while (isdigit(s[i])) 
    {
        n1 += s[i];
        i++;
    }
    sym = s[i];

    while (isdigit(s[++i]) && i < s.length()) {
        n2 += s[i];
    }
    
    num1 = stod(n1); 
    num2 = stod(n2);
    
    switch (sym)
    {
        case '#':
            return (pow(num1, num2) * pow(num2, num1));
        case '@':
            return ( pow(num1, num2) / pow(num2, num1) );
        case '&':
            return ((num2  * sqrt(num1) ) + (num1 * sqrt(num2)));
        case '%':
            return ((num2 * sqrt(num1)) - (num1 * sqrt(num2)));
        default: break;
    }

    return 1;
}

int main()
{
    int n = 0;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        getchar();
        printf("%.2lf\n", calculadora(s));
    }

    return 0;
}