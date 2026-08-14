#include <bits/stdc++.h>
using namespace std;
int hoanvi (int n) {
	if (n==0) return 1;
	return hoanvi(n-1)*n;
}
bool sinhhoanvi (vector <int> &B) {
	int N = B.size();
	int j = N - 2;
	while (j >= 0 && B[j] >= B[j+1]) {
		j--;	
	}
	if (j<0) return false;
	int k = N-1;
	while (B[k] <= B[j]) {
		k--;
	}
	swap(B[j],B[k]);
	reverse(B.begin() + j + 1, B.end());
	return true;
}

int main () {
	int n; cin >> n;
	cout << hoanvi(n) << endl;
	vector <int> B(n);
	iota(B.begin(),B.end(),1);
	do {
		for (int x: B) {
			cout << x << " ";
		}
		cout << "\n";
	}
	while (sinhhoanvi(B));
	return 0;
}
