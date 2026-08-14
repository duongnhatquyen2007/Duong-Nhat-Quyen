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
	string n;
    int k; cin >> n >> k;
    string res = "";
    for (char c : n) {
        while (!res.empty() && res.back() < c && k > 0) {
            res.pop_back();
            k--;
        }
        res.push_back(c);
    }
    while (k > 0 && !res.empty()) {
        res.pop_back();
        k--;
    }
    if (res.empty()) {
        cout << 0 << "\n";
    } else {
        cout << res << "\n";
    }
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
