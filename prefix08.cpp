#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,x; cin >> n >> x;
    map <int, int> prefix_counts;
    prefix_counts[0] = 1;
    int cnt=0;
    int sum=0;
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        cnt+=a;
        sum+= prefix_counts[cnt - x];
        prefix_counts[cnt]++;
    }
    cout << sum << "\n";
    return 0;
}