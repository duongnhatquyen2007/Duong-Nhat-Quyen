#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,k; cin >> n;
	cin.ignore();
	string x[n],p[n],X[k],P[k];
	for (int i=0; i<n; i++) {
		getline(cin,x[i]);
		getline(cin,p[i]);
	}
	cin >> k;
	cin.ignore();
	for (int j=0; j<k; j++) {
		getline(cin,X[j]);
		getline(cin,P[j]);
	}
	int c=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<k; j++) {
			if (x[i]==X[j] && p[j]==P[j]) {
				c++;
				cout << c << " ";
			}
		}
	}
	return 0;
}
