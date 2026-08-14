#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<int> &A, int target) {
    int lo = 0, hi = A.size - 1;
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
    int t; cin >> t;
    for (int l=0; l<t; l++) {
        int n; cin >> n;
        vector <int a(n);
        for (int m=0; m<n; m++) {
            cin >> a[m];
        }        cout << c << endl;
        if (binarySearch(a,0,size(a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}