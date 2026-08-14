#include <bits/stdc++.h>
using namespace std;
bool check (long long a[], int n, long long limit, int k) {
    int cnt=1;
    long long sum=0;
    for (int i=0; i<n; i++) {
        if (a[i] > limit) {
            return false;
        }
        if (sum + a[i] <= limit) {
            sum+=a[i];
        }
        else {
            cnt++;
            sum=a[i];
        }
    }
    return cnt >= k;
}
long long binary_search (long long a[], int n, int k) {
    long long lo = 0, hi = 0;
    for (int i=0; i<n; i++) {
        lo=max(lo,a[i]);
        hi+=a[i];
    }
    long long ans=hi;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (check(a,n,mid,k)){
            ans = mid;
            hi = mid-1;
        }
        else {
            lo=mid+1;
        }
    }
    return ans;
}
int main () {
    long long n, k; cin >> n >> k;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << binary_search(a,n,k) << endl;
    return 0;
}