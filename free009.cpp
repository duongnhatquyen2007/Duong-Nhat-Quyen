#include <bits/stdc++.h>
using namespace std;
int main () {
    int T; cin >> T;
    int s=0;
    for (int i=0; i<T; i++) {
        int x,y; cin >> x >> y;
        if (x>=2 && y>=2) {
            s=x*y*2;
            cout << s << endl;
        }
        else if (x==0) {
            s=y*(y-1)*(y-2);
            cout << s << endl;
        }
        else if (y==0) {
            s=x*(x-1)*(x-2);
            cout << s << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}