#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	long long a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int c=0;
	for (int i=0; i<n; i++) {
		if (a[1]%a[i+1]==0) {
			c++;
			cout << c << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}
