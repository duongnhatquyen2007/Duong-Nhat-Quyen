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
    int X, Y, M; cin >> X >> Y >> M;
    int max_milk = 0;
    for (int i = 0; i * X <= M; i++) {
        for (int j = 0; i * X + j * Y <= M; j++) {
            int current_total = i * X + j * Y;
            if (current_total > max_milk) {
                max_milk = current_total;
            }
        }
    }
    cout << max_milk << endl;
}
	

int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

