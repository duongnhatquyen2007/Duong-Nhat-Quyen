#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    for (int j=0; j<t; j++) {
        int n,m; cin >> n >> m;
        char a[m];
        for (int i=0; i<m; i++) {
            cin >> a[i];
        }
        for (int i=0; i<m; i++) {
            if (a[i]=='v' && a[i]=='i' && a[i]=='k' && a[i]=='a') {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}