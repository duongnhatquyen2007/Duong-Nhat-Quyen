#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		cin.ignore();
		string s;
		getline(cin,s);
		int c=0;
		if ((s.find("[]")!=string::npos) || (s.find("[()]")!=string::npos)){
			c++;
		}
		else {
			c=0;
		}
		cout << c << endl;
	}
}
