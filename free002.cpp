#include <bits/stdc++.h>
using namespace std;
int main () {
    int h,m,a,b; cin >> h >> m >> a >> b;
    int h2,m2;
    h2=h+a+b+6;
    m2=m;
    cout << h2 << " " << m2 << endl;
    return 0;
}