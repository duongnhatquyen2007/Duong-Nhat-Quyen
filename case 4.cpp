#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m; cin >> n >> m;
	int a[n][m];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	int S=0;
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<m; j++) {
			S+=abs(a[j]-a[j-1]);
		}
	}
	cout << S;
	return 0;
}
