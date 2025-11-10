#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,i,j,k,l,m; cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
		cin >> A[i];
	for (int j=0;j<A[i];j++) {
		if (A[i]<0)
			j++;
	}
	for (int k=0;k<A[i];k++) {
		if (A[i]>0)
			k++;
	}
	for (int l=0;l<A[i];l++) {
		if (A[i]%2==0)
			l++;
	}
	for (int m=0;m<A[i];m++) {
		if (A[i]%2!=0)
			m++;
	}
	cout << j << endl;
	cout << k << endl;
	cout << l << endl;
	cout << m << endl;
}
