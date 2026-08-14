#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int x,y; cin >> x >> y;
        int S=0;
        if (x==y) {
            S=x+y;
        }
        else if (x>y) {
            S=(x*2)-1;
        }
        else if (x==0 && y==0) {
            S=0;
        }
        else {
            S=x+y;
        }
        cout << S << endl;
    }
    return 0;
}
