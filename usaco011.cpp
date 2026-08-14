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
	int A[n][n];
	int c=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
			if (i>j) c++;
			else if (j>i) break;
		}
	}
	cout << c;
}
	

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

