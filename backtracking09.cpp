#include <bits/stdc++.h>
using namespace std;
int c=0;
void dequy (int i, int n, int x[], int a, int bienhientai, int biendem) {
	if (i==n) {
		if (biendem > 0 && bienhientai == a * biendem) {
			c++;
		}
		return;
	}
	dequy(i+1, n, x, a, bienhientai, biendem);
	dequy(i+1, n, x, a, bienhientai+x[i], biendem+1);	
}
int main () {
	int T; cin >> T;
	for (int j=0; j<T; j++) {
		int n,a; cin >> n >> a;
		int x[n];
		for (int i=0; i<n; i++) {
			cin >> x[i];
		}
		c=0;
		dequy(0, n, x, a, 0, 0);
		cout << c << endl;
	}
	return 0;
}
