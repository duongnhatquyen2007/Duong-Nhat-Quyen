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
    int q; cin >> q;
    set<long long> s;
    while (q--) {
        char type;
        long long x;
        cin >> type >> x;
        if (type == '+') {
            s.insert(x);
        } 
        else if (type == '-') {
            s.erase(x);
        } 
        else if (type == '?') {
            if (s.find(x) != s.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
