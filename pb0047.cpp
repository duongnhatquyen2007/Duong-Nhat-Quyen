#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,S;
	while (true) {
		cin >> n;
		if (n==-1)
			break;
		S=0;
		for (int i=0; i<n; i=i+30000)
			S+=n;
	}
	cout << S;
	return 0;
}
