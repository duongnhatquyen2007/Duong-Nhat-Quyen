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
    long long special_pairs = 0;
    map<string, int> counts;
    for (int i = 0; i < n; i++) {
        string city, state;
        cin >> city >> state;
        string prefix = city.substr(0, 2);
        if (prefix != state) {
            string target = state + prefix;
            if (counts.count(target)) {
                special_pairs += counts[target];
            }
            string current = prefix + state;
            counts[current]++;
        }
    }
    cout << special_pairs << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
