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
	struct Shift {
	    int start, end;
	};
    int n;
    cin >> n;
    vector<Shift> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i].start >> s[i].end;
    }
    int max_coverage = 0;
    for (int i = 0; i < n; i++) {
        vector<int> time_covered(1001, 0);
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int t = s[j].start; t < s[j].end; t++) {
                time_covered[t] = 1;
            }
        }
        int current_total = 0;
        for (int t = 0; t <= 1000; t++) {
            if (time_covered[t] == 1) {
                current_total++;
            }
        }
        max_coverage = max(max_coverage, current_total);
    }
    cout << max_coverage << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

