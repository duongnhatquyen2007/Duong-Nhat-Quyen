#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	int A[n];
	for (int i=0;i<n;i++) {
		cin >> A[i];
	}
	int min=A[0];
	int max=A[0];
	for (int i=0; i<n; i++) {
		if (min<A[i]) min=A[i];
		if (max>A[i]) max=A[i];
	}
	int c=0;
	for (int i=0; i<n; i++) {
		if (min==A[i] || max==A[i]) c++;
	}
	cout << c;
	return 0;
}
