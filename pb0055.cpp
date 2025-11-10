#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
		cin >> A[i];
	long long S=0;
	for (int i=0;i<n;i++)
		S+=A[i];
	cout << S;
	return 0;
}
