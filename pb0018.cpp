#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n,p,sokhach,sokhoang; cin >> n >> p;
    sokhach = 4*p;
    if (n%sokhach==0) {
        sokhoang=n/sokhach;
        cout << sokhoang;
    }
    else {
        sokhoang=(n/sokhach)+1;
        cout << sokhoang;
    }
    return 0;   
}