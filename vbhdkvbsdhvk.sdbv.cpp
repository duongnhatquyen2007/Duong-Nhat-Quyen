#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int j=0; j<t; j++) {
		int n,k1,k2; cin >> n >> k1 >> k2;
		int a[k1][k2];
		for (int i=0; i<k1; i++) {
			for (int k=0; k<k2; k++) {
				cin >> a[i][k];
			}
		}
		for (int i=0; i<k1; i++) {
			for (int k=0; k<k2; k++) {
				if (a[i] > a[k]) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
		}
	}
	return 0;
}
