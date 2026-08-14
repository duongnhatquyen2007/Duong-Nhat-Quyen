#include <bits/stdc++.h>
using namespace std;
int binarySearch(int A[], int sizeA, int target) {
    int lo = 0, hi = sizeA - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target) {
			return 0;
		}
        else if (A[mid] < target) {
        	lo = mid+1;
		}
        else {
        	hi = mid-1;
		}
    }
    if (hi < 0) return abs(target - A[lo]);
    else if (lo >= sizeA) return abs (target - A[hi]);
    return min(abs(target - A[hi]),abs(target - A[lo]));
}
int main () {
	int n,q; cin >> n >> q;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort (a, a+n);
	int x;
	while(q--) {
		cin >> x;
		cout << binarySearch(a,n,x) << endl;
	}
	return 0;
}
