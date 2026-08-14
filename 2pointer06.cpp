#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    for (int j=0; j<t; j++) {
        int n,x; cin >> n >> x;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        bool check = false;
        for (int i=0; i<n-2 && !check; i++) {
            int l = i+1;
            int r = n-1;
            while (l<r) {
                long long sum = a[i] + a[l] + a[r];
                if (sum == x) {
                    check = true;
                    break;
                }
                else if (sum < x) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        cout << (check ? "YES" : "NO") << "\n";
    }
    return 0;
}