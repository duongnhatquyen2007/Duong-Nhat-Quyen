#include <bits/stdc++.h>
using namespace std;
int binarySearch (int a[], int size, int tag) {
    int lo = 0, hi = size - 1;
    int ans = 0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if  (a[mid] >= tag) {
            ans = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    return ans;
}
int main () {
    int n,m; cin >> n >> m;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int z;
    for (int j=0; j<m; j++) {
        cin >> z;
        int test = binarySearch(a,n,z);
        int left = test;
        int rL=0, rR=0;
        if (left > 0) {
            rL = z-a[0];
        }
        else {
            rL = 0;
        }
        int right = n - test;
        if (right > 0) {
            rR = a[n-1]-z;
        }
        else {
            rR = 0;
        }
        if (left > right) {
            cout << "L" << " " << rL << endl;
        }
        else if (right > left) {
            cout << "R" << " " << rR << endl;
        }
        else {
            cout << "L" << " " << rL << " " << "R" << " " << rR << endl;
        }
    }
    return 0;
}
