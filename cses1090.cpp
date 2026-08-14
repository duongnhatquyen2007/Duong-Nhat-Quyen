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
    int n;
    long long x;
    cin >> n >> x;
    vector<int> a(n); 
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i=0;
    int j=n-1;
    int c=0;
    while (i<=j) {
    	if (i==j) {
    		c++;
    		break;
		}
		if (a[i]+a[j]<=x) {
			i++;
			j--;
		}
		else {
			j--;
		}
		c++;
	}
	cout << c;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

