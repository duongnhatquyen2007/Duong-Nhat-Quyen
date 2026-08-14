#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		int n; cin >> n;
		int a[n];
		for (int j=0; j<n; j++) {
			cin >> a[i];
		}
		int max_a = a[0];
		if (a[i] > max_a) {
			max_a = a[i];
		}
		cout << max_a << endl;
	}
}
