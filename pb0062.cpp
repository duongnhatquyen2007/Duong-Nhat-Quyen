#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,t; cin>>n>>t;
	double A[n];
	for (int i=0;i<n;i++)
		cin >> A[i];
	sort (A,A+n,greater<double>());
	double S=0;
	for (int i=0;i<t;i++)
		S+=A[i];
	cout << fixed << setprecision(2) << S;
	return 0;
}
