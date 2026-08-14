#include <bits/stdc++.h>
using namespace std;
vector<int> buildPrefixSum(const vector<int>& a, int C = 0) {
    int n = (int)a.size();
    vector<int> prefixSum(n + 1);

    prefixSum[0] = C;

    for (int i = 0; i < n; i++)
        prefixSum[i + 1] = prefixSum[i] + a[i];

    return prefixSum;
}
int main () {
    int n; cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int c=0;
    vector<int> pref = buildPrefixSum(a);
    for (int i=0; i<n; i++) {
        if (pref[i]%n==0) {
            c++;
        }
    }
    
    cout << c << "\n";
    return 0;
}