#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m,k; cin >> n >> m >> k;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int max_highest=a[0];
	int max_higher=a[0];
	int max_high=a[0];
	for (int i=0; i<n; i++) {
		if (a[i] > m) {
			if (a[i] > max_highest) {
				max_highest=a[i]-a[i+1];
			}
			if (a[i+1] > max_higher && a[i] < max_highest) {
				max_higher=a[i]-a[i+1];
			}
			if (a[i+2] > max_high && a[i] < max_higher && a[i] < max_highest) {
				max_high=a[i]-a[i+1];
			}	
		}
	}
	int s=0;
	cout << max_highest << endl;
	cout << max_higher << endl;
	cout << max_high << endl;
	s=(1*max_highest)+(2*max_higher)+(3*max_high);
	cout << s;
	return 0; 
}
