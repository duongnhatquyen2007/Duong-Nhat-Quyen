#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m; cin >> n >> m;
	int a[n];
	int b[m];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int j=0; j<m; j++) {
		cin >> b[j];
	}
	int chieudai=0,r=2;
	for (int i=0; i<n; i++) {
		chieudai=a[i]+1;
	}
	r=chieudai/2;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (b[j]==a[i]) {
				cout << 0;
				break;
			}
			else {
				cout << r;
				break;
			}	
		}
	}
	return 0;
}
