#include <bits/stdc++.h>
using namespace std;
int main () {
	double a,b,c,ebs=1e-9; cin >> a >> b >> c;
	if ((a+b>c) or (b+c>a) or (a+c>b))
		if ((abs(a-b)<ebs) and (abs(b-c)<ebs) and (abs(a-c)<ebs))
			cout << "Tam giac deu";
		else if ((abs(a-b)<ebs) or (abs(a-c)<ebs) or (abs(b-c)<ebs))
			cout << "Tam giac can";
		else
			cout << "Tam giac thuong";
	return 0;
}
