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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += a[k];
            }
            int num_flowers = j - i + 1;
            if (sum % num_flowers == 0) {
                int average = sum / num_flowers;
                bool has_average_flower = false;
                for (int k = i; k <= j; k++) {
                    if (a[k] == average) {
                        has_average_flower = true;
                        break;
                    }
                }
                if (has_average_flower) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}

