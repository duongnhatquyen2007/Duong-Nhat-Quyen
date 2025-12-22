#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	if (n==0) {
		cout << 0;
		return 0;
	}
	string hexlibrary = "0123456789ABCDEF";
	string hex = "";
	while (n>0) {
		int chia = n % 16;
		hex += hexlibrary[chia];
		n/=16;
	}
	reverse (hex.begin(),hex.end());
	cout << hex;
    return 0;
}
