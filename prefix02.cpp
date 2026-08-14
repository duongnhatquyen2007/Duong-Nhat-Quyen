#include <bits/stdc++.h>
using namespace std;
const long long toida = 200000;
const long long inf = 1e18;
long long n,a[toida];
long long prefsum[toida], ans = -inf;
int main () {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (int i=1; i<=n; i++) {
        prefsum[i] = prefsum[i-1] + a[i];
    }
    for (int i=1; i<=n; i++) {
        ans=max(ans,prefsum[i]);
    }
    cout << ans;
    return 0;
}