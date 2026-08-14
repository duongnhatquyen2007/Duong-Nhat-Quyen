#include <bits/stdc++.h>
using namespace std;
struct KhoaHoc {
	string makhoa;
	string tenkhoa;
	string giangvien;
	string soluong;
};
void updategv(vector<KhoaHoc> a, int n) {
	string input;
	getline (cin,input);
	stringstream ss(input);
	string word;
	while (ss >> word) {
		if (word == "UPDATE_GIANGVIEN") {
			string z;
			ss >> z;
			if (z == "makh") {
				break;
			}
			else {
				string y;
				ss >> y;
				a.giangvien.push_back(y);
			}
		}
	}
}
void updatehv (int n, vector<KhoaHoc>a) {
	string in;
	getline (cin,in);
	stringstream ss(in);
	string num;
	while (ss >> num) {
		if (word == "UPDATE_SOLUONG") {
			string c;
			ss >> c;
			if (a == "makh") {
				break;
			}
			else {
				string b;
				ss >> b;
				a.soluong.push_back(b);
			}
		}
	}
}
void findhv (int n, vector<KhoaHoc>a) {
	string find1;
	getline(cin,find1);
	stringstream ss(find1);
	string fin;
	while (ss >> fin) {
		if (word == "FIND_ID") {
			string cc;
			ss >> cc;
			if (cc == "makh") {
				break;
			}
			else {
				string bb;
				ss >> bb;
				cout << a[i].makhoa << ", " << a[i].tenkhoa << ", " << a[i].giangvien << ", " << a[i].soluong << endl;
			}
		}
	}
}
void timkhoahoc (int n, vector<KhoaHoc>a) {
	string find2;
	getline(cin,find2);
	stringstream ss(find2);
	string fin2;
	while (ss >> fin2) {
		if (word == "FIND_ID") {
			string ba;
			ss >> ba;
			if (aa == "makh") {
				break;
			}
			else {
				string bc;
				ss >> bc;
				cout << a[i].makhoa << ", " << a[i].tenkhoa << ", " << a[i].giangvien << ", " << a[i].soluong << endl;
			}
		}
	}
}
int main () {
	int n; cin >> n;
	vector <KhoaHoc> a(n);
	for (int i=0; i<n; i++) {
		getline(cin,a[i].makhoa,',');
		getline(cin,a[i].tenkhoa,',');
		getline(cin,a[i].giangvien,',');
		getline(cin,a[i].soluong,',');
	}
	findhv(n,a);
	cout << "***";
	updategv(n,a);
	cout << "***";
	updatehv(n,a);
	cout << "***";
	timkhoahoc(n,a);
	return 0;
	
}
