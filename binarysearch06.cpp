#include <bits/stdc++.h>
using namespace std;
int binarySearchright1 (int a[], int size, int tag) {
    int lo = 0, hi = size - 1;
    int res=0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] >= tag) {
            res = size - mid;
            hi = mid-1;
        }
        else {
            lo = mid + 1;
        }
    }
    return res;
}
int binarySearchright2 (int a[], int size, int tag) {
    int lo = 0, hi = size - 1;
    int res=0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] > tag) {
            res = size - mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    return res;
}
int binarySearchleft1 (int a[], int size, int tag) {
    int lo = 0, hi = size - 1;
    int res=0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] <= tag) {
            res = mid + 1;
            lo = mid+1;
        }
        else {
            hi = mid - 1;
        }
    }
    return res;
}
int binarySearchleft2 (int a[], int size, int tag) {
    int lo = 0, hi = size - 1;
    int res=0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] < tag) {
            res = mid + 1;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }
    return res;
}
int main () {
    int n, q; cin >> n >> q;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    int x;
    for (int j=0; j<q; j++) {
        cin >> x;
        cout << binarySearchright1(a,n,x) << " " << binarySearchright2(a,n,x) << " " << binarySearchleft1(a,n,x) << " " << binarySearchleft2(a,n,x) << endl;
    }
    return 0;
}
