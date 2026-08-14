#include <bits/stdc++.h>
using namespace std;
int binarySearch(int A[], int sizeA, int target) {
    int lo = 0, hi = sizeA - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    int b=hi, c=hi-1, d=lo, e=lo-1;
    cout << b << " " << c << " " << d << " " << e << endl;
}
int main () {
	int n,q; cin >> n >> q;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int x;
	for (int j=0; j<q; j++) {
		cin >> x;
		cout << binarySearch(a,n,x);
	}
}
