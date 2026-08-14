#include <bits/stdc++.h>
using namespace std; 
// ll = long long;
// using vi = vector<ll>;
void setIO() { 
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
	struct Cow {
	    int s, t, c;
	};
	struct AC {
	    int a, b, p, m;
	};
	int N, M;
	vector<Cow> cows;
	vector<AC> acs;
	int min_cost = 1e9;
	bool check(const vector<int>& selected_acs) {
	    int cooling[101] = {0};
	    for (int idx : selected_acs) {
	        for (int i = acs[idx].a; i <= acs[idx].b; i++) {
	            cooling[i] += acs[idx].p;
	        }
	    }
	    for (const auto& cow : cows) {
	        for (int i = cow.s; i <= cow.t; i++) {
	            if (cooling[i] < cow.c) return false;
	        }
	    }
	    return true;
	}
	void solve(int idx, int current_cost, vector<int>& selected_acs) {
	    if (idx == M) {
	        if (check(selected_acs)) {
	            min_cost = min(min_cost, current_cost);
	        }
	        return;
	    }
	    solve(idx + 1, current_cost, selected_acs);
	    selected_acs.push_back(idx);
	    solve(idx + 1, current_cost + acs[idx].m, selected_acs);
	    selected_acs.pop_back();
	}
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        cows.push_back({s, t, c});
    }
    for (int i = 0; i < M; i++) {
        int a, b, p, m;
        cin >> a >> b >> p >> m;
        acs.push_back({a, b, p, m});
    }
    vector<int> selected_acs;
    solve(0, 0, selected_acs);
    cout << min_cost << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
