#include <bits/stdc++.h>
using namespace std;
int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,s; cin >> n >> s;
    int a[n];
    int i=0;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    int ans=0, sum=0;
    for (int l=1,r=1; r<=n; r++) {
        sum += a[r];
        while (sum > s) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
    return 0;
}