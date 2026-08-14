#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int ga=0, cho=0;
	int tong=0;
	for (int i=0; i<n; i++) {
		if (a[i]%2==0) {
			ga=a[i]/2;
		}
		else if (a[i]%4==0) {
			cho=a[i]/4;
		}
		else {
			cout << 0 << endl;
		}	
		tong=ga+cho;
		cout << tong << endl;
	}
	return 0;
}
