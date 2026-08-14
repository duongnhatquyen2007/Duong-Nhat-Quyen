#include <bits/stdc++.h>
using namespace std;
int main () {
    double x,y; cin >> x >> y;
    int tong = 0;
    int hientai = x;
    int daidien = 1;
    while (true) {
    	int target = x + daidien;
    	if (daidien > 0 && x <= y && y <= target) {
    		tong += abs(y - hientai);
    		break;
		}
		else if (daidien < 0 && x <= y && y <= x) {
    		tong += abs(y - hientai);
    		break;
		}
		tong += abs(target - hientai);
		hientai = target;
		daidien *= -2;
	}
	cout << tong << endl;
    return 0;
}