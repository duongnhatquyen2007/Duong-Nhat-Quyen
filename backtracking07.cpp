#include <bits/stdc++.h>
using namespace std;
int n;
long long a[40];
int dequy (long long i, long long start, long long total) {
	if (i==n) {
		long long nhom2 = total - start;
		return abs(nhom2 - start);
	}
	long long themnhom1 = dequy(i+1,start+a[i],total);
	long long boqua = dequy(i+1,start,total);
	return min(themnhom1, boqua);
}
int main () {
	cin >> n;
	long long total=0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		total+=a[i];
	}
	cout << dequy(0,0,total);
	return 0;
}
