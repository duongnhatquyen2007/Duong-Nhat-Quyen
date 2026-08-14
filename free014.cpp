#include <bits/stdc++.h>
using namespace std;
int main () {
	int q; cin >> q;
	for (int j=0; j<q; j++) {
		int n; cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		vector <int> c(n);
		for (int i=0; i<n; i++) {
			if ((a[i+1] >= a[i]) && (a[i+1] == a[i])) {
				c.push_back(i);	
			}
		}
		cout << c(n) << " ";
		return 0;
	}
}
