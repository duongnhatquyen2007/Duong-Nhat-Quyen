#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using vi = vector<ll>;
const int MAXN = 1000005;
int a[MAXN];
vector<int> positions[MAXN];
vector<int> queries_at[MAXN];
bool seen[MAXN];
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
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        positions[a[i]].push_back(i);
    }
    for (int v = 1; v <= n; v++) {
        if (positions[v].size() >= 2) {
            int m = positions[v].size();
            int threshold_idx = positions[v][m - 2];
            queries_at[threshold_idx].push_back(v);
        }
    }
    long long total_moos = 0;
    int distinct_count = 0;
    for (int i = 1; i <= n; i++) {
        for (int v : queries_at[i]) {
            int current_distinct = distinct_count;
            if (seen[v]) {
                current_distinct--;
            }
            total_moos += current_distinct;
        }
        if (!seen[a[i]]) {
            seen[a[i]] = true;
            distinct_count++;
        }
    }
    cout << total_moos << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
