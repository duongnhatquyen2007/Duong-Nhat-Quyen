#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int j=0; j<t; j++) {
		int n; cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int c=0;
		for (int i=0; i<n; i++) {
			if ((a[i]==0) || (a[i]<0)) {
				c++;
			}
			else {
				c=0;
			}
		}
		cout << c << endl;
	}
	return 0;
}
