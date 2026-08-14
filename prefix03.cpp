#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 200000;
long long diff[MAXN+2] = {0};
long long pref[MAXN+2] = {0};
int main () {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
   int n,k,q; cin >> n >> k >> q;
   for (int i=1; i<=n; i++) {
        int l,r; cin >> l >> r;
        diff[l] = diff[l] + 1;
        diff[r+1] = diff[r+1] - 1;
   }
   long long x_hien_tai = 0;
   for (int i=1; i<=MAXN; i++) {
        x_hien_tai = x_hien_tai + diff[i];
        int v_i = 0;
        if (x_hien_tai >= k) {
            v_i = 1;
        }
        pref[i] = pref[i-1] + v_i;
   } 
   for (int i=1; i<=q; i++) {
        int a,b; cin >> a >> b;
        int result = pref[b] - pref[a-1];
        cout << result << "\n";
   }
   return 0;
}

