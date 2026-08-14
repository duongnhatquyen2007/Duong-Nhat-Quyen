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
	cin.ignore();
	char a[n];
	char x = a[0];
	int c=0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n; i++) {
		if (a[i] > x) {
			x = a[i];
		}
		if (x == a[i]) {
			c++;
		}
	}
	cout << c;
}
	

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

