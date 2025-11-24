#include <bits/stdc++.h>
using namespace std;
int main () {
	double x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	double x=x1-x2;
	double y=y1-y2;
	double d=sqrt(x*x+y*y);
	if ((d==0) and (r1==r2))
		cout << "-1";
	else if (d>r1+r2 || d<abs(r1-r2))
		cout << "0";
	else if (d==r1+r2 || d==abs(r1-r2))
		cout << "1";
	else
		cout << "2";
	return 0;
		
}
