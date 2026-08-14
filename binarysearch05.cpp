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
    return -1;
}
int main () {
	int n, q; cin >> n >> q;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort (a,a+n);
	int x;
	for (int j=0; j<q; j++) {
		cin >> x;
		if (binarySearch(a,n,x)!=-1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
