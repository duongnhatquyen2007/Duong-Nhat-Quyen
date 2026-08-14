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
void solve() {
    int n; cin >> n;
    set<int> distinct_elements;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        distinct_elements.insert(x);
	}
    cout << distinct_elements.size() << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}


