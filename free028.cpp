#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		int a,b,c; cin >> a >> b >> c;
		int s=0;
		s=abs(a-b-c);
		cout << s;
	}
	return 0;
}
	
