#include <bits/stdc++.h>
using namespace std;
int main () {
	string n; cin >> n;
	string xaudao=n;
	reverse(xaudao.begin(),xaudao.end());
	if (xaudao==n)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
