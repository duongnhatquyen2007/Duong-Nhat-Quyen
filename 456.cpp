#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    for (int j=0; j<t; j++) {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int s=0;
        for (int i=0; i<n; i++) {
            s+=a[i];
        }
        if (s<=2) {
            s++;
        }
        cout << s << endl;
        return 0;
    }
}