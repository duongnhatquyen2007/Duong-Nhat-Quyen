#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	vector<int> A(n);
	for (int i=0;i<n;i++)
		cin >> A[i];
	int td=1;
	for (int i=1;i<n;i++) {
		if(A[i]<A[i-1]) {
			td=0;
			break;
		}
	}
	if (td==1) cout << "Yes";
	else cout << "No";
	return 0;
}
