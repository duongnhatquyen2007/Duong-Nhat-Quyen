#include<bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    vector <long long> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end())
    int demsoluongkhac=1, demlap=1,hientai=1;
    for (int i=1; i<n; i++) {
        if (a[i] == a[i-1]) {
            hientai++;
        }
        else {
        	demsoluongkhac++;
        	demlap=max(demlap,hientai);
        	hientai=1;
		}
    }
    demlap=max(demlap,hientai);
    cout << demsoluongkhac << endl;
    cout << demlap << endl;
    return 0;
}
