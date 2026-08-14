#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using vi = vector<ll>;
void setIO(){ 
	cout << fixed << setprecision(9); 
	ios::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0); 
	if (fopen("test.in", "r")) { 
		freopen("test.in", "r", stdin); 
		freopen("test.out", "w", stdout); 
	} 
}
void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    set<long long> s;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << -1 << " ";
            s.insert(a[i]);
            continue;
        }
        auto it = s.lower_bound(a[i]);
        long long min_dist = -1;
        if (it != s.end()) {
            min_dist = abs(*it - a[i]);
        }
        if (it != s.begin()) {
            auto it_prev = prev(it);
            long long dist_prev = abs(a[i] - *it_prev);
            
            if (min_dist == -1 || dist_prev < min_dist) {
                min_dist = dist_prev;
            }
        }
        cout << min_dist << " ";
        s.insert(a[i]);
    }
    cout << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

