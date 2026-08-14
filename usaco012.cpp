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
	int k,n; cin >> k >> n;
	int A[k][n];
	int c=0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (j<i) c++;
		}
	}
	cout << c+1;
}
	

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

