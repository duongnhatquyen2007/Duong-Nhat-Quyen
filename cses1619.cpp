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
    vector<pair<int, int>> events; 
    for (int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());
    int c=0,d=0;
    for (auto const & event: events) {
    	d += event.second;
    	if (d>c) {
    		c=d;
		}
	}
	cout << c;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

