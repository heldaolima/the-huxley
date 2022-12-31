#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, i = 0;
    cin >> n;
    vector<int> vec(n);
    
    for (i = 0; i < n; i++) {
        cin >> vec[i];    
    }
    
    for (i = n-1; i >= 0; i--)
        cout << vec[i] << " ";
    cout << "\n";

    for (i = 1; i <= n; i++)
        cout << vec[i%n] << " ";
    cout << "\n";

    sort(vec.begin(), vec.end());
    for (i = n-1; i >= 0; i--)
         cout << vec[i] << " ";
        cout << "\n";
    return 0;
}
