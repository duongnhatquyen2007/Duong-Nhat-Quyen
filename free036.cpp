#include <bits/stdc++.h>
using namespace std;
int main () {
    int A,B,C,N; cin >> A >> B >> C >> N;
    int pass=0,fail=0;
    pass=A+B-C;
    fail=N-pass;
    if (fail!=0) {
        cout << fail;
    }
    else {
        cout << -1;
    }
    return 0;
}