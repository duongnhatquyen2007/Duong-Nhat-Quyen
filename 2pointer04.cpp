#include <bits/stdc++.h>
using namespace std;
int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n,s;
    cin >> n >> s;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    long long ans=0, sum=0, l=0;
    for (int r=0; r<n; r++) {
        sum += a[r];
        while (sum > s && l <=r) {
            sum -= a[l];
            l++;
        }
        if (sum == s) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}