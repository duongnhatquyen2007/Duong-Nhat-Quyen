#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	int a[n];
	int min_a=a[0];
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]>min_a) {
			cout << a[i];
		}
	}
	return 0;
}
