#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		int n; cin >> n;
		int a[n];
		for (int j=0; j<n; j++) {
			cin >> a[j];
		}
		int c=0;
		for (int j=0; j<n; j++) {
			if (a[j]==a[j+1]) {
				c=-1;
			}
			else if ((a[j]==a[j+1]) || (a[j]!=a[j+1])){
				c++; 
			}
			else {
				c++;
			}
		}
		cout << c << endl;
	}
}
