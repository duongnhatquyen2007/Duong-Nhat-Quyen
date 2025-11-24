#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,S; cin >> n;
	int A[n];
	for (int i=0;i<n;i++) 
		cin >> A[i];
	sort(A,A+n);
	int max_val=A[0];
	int min_val=A[0];
	for (int i=0;i<n;i++) {
		if (A[i]<max_val)
			max_val=A[i]+1;
		if (A[i]<min_val)
			min_val=A[i]+1;
	}
	S=abs(min_val-max_val);
	cout << S;
	return 0;
}
		
	
