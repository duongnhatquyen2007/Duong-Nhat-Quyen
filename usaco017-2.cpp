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
    int N; 
	string S; cin >> N >> S;
    for (int K = 1; K <= N; K++) {
        set<string> substrings;
        bool duplicate = false;
        for (int i = 0; i <= N - K; i++) {
            string sub = S.substr(i, K);
            if (substrings.count(sub)) {
                duplicate = true;
                break;
            }
            substrings.insert(sub);
        }
        if (!duplicate) {
            cout << K << endl;
            break;
        }
    }
}

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
