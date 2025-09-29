#include <iostream>
using namespace std;
int main () {
    long long S=0,n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        S=S+i;
    }
    cout << S;
    return 0;          
} 