#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin>>n;
	vector<int>A(n);
	for (int &x: A)
		cin >> x;
	cout << accumulate(A.begin(),A.end(),0);
	return 0;
}
