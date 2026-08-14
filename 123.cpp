#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    for (int j=0; j<t; j++) {
        int k; cin >> k;
        if (k==1 || k>=1000000000) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}