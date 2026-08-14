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
	int N; cin >> N;
    map<string, int> milk_map;
    string cow_names[] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for (const string& name : cow_names) {
        milk_map[name] = 0;
    }
    for (int i = 0; i < N; i++) {
        string name;
        int amount;
        cin >> name >> amount;
        milk_map[name] += amount;
    }
    vector<int> productions;
    for (auto const& [name, total] : milk_map) {
        productions.push_back(total);
    }
    sort(productions.begin(), productions.end());
    productions.erase(unique(productions.begin(), productions.end()), productions.end());
    if (productions.size() < 2) {
        cout << "Tie" << endl;
        int second_min_val = productions[1];
        int count = 0;
        string winner = "";
        for (auto const& [name, total] : milk_map) {
            if (total == second_min_val) {
                count++;
                winner = name;
            }
        }
        if (count == 1) {
            cout << winner << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
}
int main() { 
	setIO(); 
	solve(); 
	return 0; 
}
