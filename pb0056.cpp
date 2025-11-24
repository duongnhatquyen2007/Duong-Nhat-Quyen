#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,i; cin >> n;
	int A[n];
	for (int i=0;i<n;i++)
		cin >> A[i];
	sort(A,A+n);
	long long max_val=max(A[i]);
	long long S=0;
	for (int j=0;j<i;j++)
		S+=i-max_val;
	cout << S;
	return 0;
}
