#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int size, int X, int S) {
    long long sum = 0;
    for (int i=0; i<size; i++) {
        sum += (long long)min(a[i],X);
    }
    return sum <= S;
}
int binarySearch (int a[], int size, int S) {
    int lo = 0, hi = *max_element(a,a+size);
    int res=0;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (check(a,size, mid, S)) {
            res = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return res;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,S; cin >> n >> S;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    cout << binarySearch(a,n,S);
    return 0;
}
