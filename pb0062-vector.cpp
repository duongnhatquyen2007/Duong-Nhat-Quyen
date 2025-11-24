#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,t; cin>>n>>t;
	vector<double> A(n);
	for (double &x:A)
		cin >> x;
	sort(A.begin(),A.end(),greater<double>());
	double S=0;
	for (int i=0;i<t;i++)
		S+=A[i];
	cout << fixed << setprecision(2) << S;
	return 0;
}
