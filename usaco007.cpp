#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int A[n];
    int S=0;
    for (int i=0; i<n; i++) {
    	cin >> A[i];
    	S+=A[i];
	}
	S=S*1.66;
	cout << S;
    return 0;
}