#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using vi = vector<ll>;
void setIO()
{ //cout << fixed << setprecision(9); 
	ios::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0); 
	if (fopen("1.in", "r")) 
	{ freopen("1.in", "r", stdin); 
		freopen("1.out", "w", stdout); 
	} 
}
void solve(
	int m,n,k; cin >> m >> n >> k;
    for (int i=0; i<m; i++) {
    	string x; cin >> x;
    	string ex = "";
    	for (char c : x) {
    		for (int j = 0; j < k; j++) {
    			ex += c;
			}
		}
		for (int j = 0; j< k; j++) {
			cout << ex << endl;
		}
	}){ }

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}