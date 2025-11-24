#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	vector<int>A(n);
	for(int &x: A)
		cin >> x;
	int i=0, j=n-1;
	while (i<=j) {
		if (A[i]==A[j]) {
			i++;
			j--;
		}
		else break;
	}
	if (i<=j)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
