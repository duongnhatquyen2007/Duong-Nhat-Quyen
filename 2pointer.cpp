#include <bits/stdc++.h>
using namespace std;
int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    int i=0,j=0;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    int m; cin >> m;
    int b[m];
    for (j=0; j<m; j++) {
        cin >> b[j];
    }
    i=0; j=0;
    vector <int> c;
    while (i < n || j < m) {
        if (j == m || (i < n && a[i] < b[j])) {
            c.push_back(a[i++]);
        }
        else {
            c.push_back(b[j++]);
        }
    }
    for (auto it : c) {
        cout << it%2026 << " ";
    }
    return 0;
}