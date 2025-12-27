#include <bits/stdc++.h>
using namespace std;
int main () {
	int a,b; cin >> a >> b;
	if ((a==0) and (b!=0)) {
		cout << "No Solution";
	}
	else if ((a==0) and (b==0)) {
		cout << "Many Solutions";
	}
	else {
		double x=(double)-b/a;
		cout << fixed << setprecision(2) << x;
	}
}
