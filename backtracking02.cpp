#include <bits/stdc++.h>
using namespace std;
int n,k;
int dem=0;
vector <int> mangcon;
int tinhtohop (int n, int k) {
	if (k>n) return 0;
	if (k==0 || k==n) return 1;
	if (k > n-k) k=n-k;
	int res = 1;
	for (int i=1; i<=k; i++) {
		res = res * (n-i+1)/i;
	}
	return res;
}
void intapcon () {
	for (int i : mangcon) {
		cout << i << " ";
	}
	cout << "\n";
}
void sinhtapcon (int pos) {
	int socuoi = (mangcon.empty() ? 0 : mangcon.back());
	int c=0;
	for (int i = socuoi + 1; i <=n; i++) {
		mangcon.push_back(i);
		if (mangcon.size() == k) {
			intapcon();
			dem++;
		}
		else {
			sinhtapcon(pos + 1);
		}
		mangcon.pop_back();
	}
}
int main () {
	cin >> n >> k;
	mangcon.clear();
	cout << tinhtohop(n,k) << endl;
	sinhtapcon(1);
	return 0;
}
