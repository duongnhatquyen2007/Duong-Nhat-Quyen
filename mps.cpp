#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		int n; cin >> n;
		int k;
		int a[n];
		int s=0;
		for (k=0; k<n; k++) {
			cin >> a[i];
		}
		for (int k=0; k<i%2; k++) {
			vector <int> B(k);
			B.push_back(k);
			s+=B[k];
			cout << s;
		}
	}
}
