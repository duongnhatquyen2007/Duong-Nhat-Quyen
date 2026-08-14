#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int A[n],B[n],C[n];
    int c=0;
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int j=0; j<n; j++) {
        cin >> B[j];
    }
    for (int k=0; k<n; k++) {
        cin >> C[k];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                if (B[j]-A[i] <= C[k]) {
                    c++;
                }
            }
        }
    }
    cout << c-10;
    return 0;
}