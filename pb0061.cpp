#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	int A[n];
	double S=0;
	for (int i=0; i<n; i++) {
		cin >> A[i];
	}
	for (int i=0; i<n; i++) {
		S+=A[i];
	}
	S=S/n;
	round(S);
	cout << fixed << setprecision(2) << S;
	return 0;
}
