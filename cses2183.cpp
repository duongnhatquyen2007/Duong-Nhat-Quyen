#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using vi = vector<ll>;
void setIO(){ 
	cout << fixed << setprecision(9); 
	ios::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0); 
	if (fopen("test.in", "r")) { 
		freopen("test.in", "r", stdin); 
		freopen("test.out", "w", stdout); 
	} 
}
void solve(){
   int n; cin >> n;
   int a[n];
   for (int i=0; i<n; i++) {
		cin >> a[i];
   }
   sort (a, a+n);
   int res=1;
   for (int i=0; i<n; i++) {
   		if (a[i] > res) {
   			break;
		}
		res += a[i];
   }
   cout << res;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
