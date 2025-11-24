#include<bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	int A[n];
	for (int i=0; i<n; i++) {
		cin >> A[i];
	}
	int e=0;
	for (int i=0; i<n; i++) {
		int x=A[i];
		int snt=1;
		if (x<2) {
			snt=0;
		}
		else {
			for (int j=2;j*j<=x;j++) {
				if (x%j==0) {
					snt=0;
					break;
				}
			}
		}
		e+=snt;
	}
	cout << e;
	return 0;
}

