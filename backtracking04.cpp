#include <bits/stdc++.h>
using namespace std;
int target_len;
string a = "";
void sinhxau(int pos) {
	if (pos > target_len) {
		cout << a << "\n";
		return;
	}
	for (char i = 'a'; i <= 'z'; i++) {
		a.push_back(i);
		sinhxau(pos + 1);
		a.pop_back();
	}
}
int main () {
	string s;
	cin >> s;
	target_len = s.size();
	sinhxau(1);
	return 0;
}
