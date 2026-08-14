#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int j=0; j<t; j++) {
		int n, m; cin >> n >> m;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int s=0;
		for (int i=0; i<n; i++) {
			s+=a[i];
		}
		for (int i=0; i<n; i++) {
			if (s==m) {
				s=m;
			}
			else if (s>m) {
				for (int k=0; k<m; k++) {
					s=0;
					s+=k;
					s=s+1;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
