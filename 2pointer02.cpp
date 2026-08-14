#include <bits/stdc++.h>
using namespace std;
int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n];
    int i=0;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    i=0; 
    int j=n-1;
    while (i < j) {
        if (a[i] + a[j] == x) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
        if (a[i] + a[j] < x) {
            i+=1;
        }
        else {
            j-=1;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
