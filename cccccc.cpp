#include <bits/stdc++.h>
using namespace std;
struct KhoaHoc {
    string ma, ten, giangVien;
    int soLuong;
};
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
void printKH(const KhoaHoc &kh) {
    cout << kh.ma << "," << kh.ten << "," << kh.giangVien << "," << kh.soLuong << endl;
}
void findByID(const vector<KhoaHoc> &ds, string ma) {
    if (ma == "makh") return;
    bool found = false;
    for (const auto &kh : ds) {
        if (kh.ma == ma) {
            printKH(kh);
            found = true;
            break;
        }
    }
    if (!found) cout << "No result" << endl;
}
bool updateGiangVien(vector<KhoaHoc> &ds, string ma, string gvMoi) {
    if (ma == "makh") return false;
    for (auto &kh : ds) {
        if (kh.ma == ma) {
            kh.giangVien = gvMoi;
            return true;
        }
    }
    return false;
}
bool updateSoLuong(vector<KhoaHoc> &ds, string ma, int slMoi) {
    if (ma == "makh") return false;
    for (auto &kh : ds) {
        if (kh.ma == ma) {
            kh.soLuong = slMoi;
            return true;
        }
    }
    return false;
}
void findByTen(const vector<KhoaHoc> &ds, string tenTim) {
    if (tenTim == "tenkh") return;
    bool found = false;
    string query = toLower(tenTim);
    for (const auto &kh : ds) {
        if (toLower(kh.ten).find(query) != string::npos) {
            printKH(kh);
            found = true;
        }
    }
    if (!found) cout << "No result" << endl;
}
int main() {
    int n;
    if (!(cin >> n)) return 0;
    cin.ignore();
    vector<KhoaHoc> ds(n);
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        getline(ss, ds[i].ma, ',');
        getline(ss, ds[i].ten, ',');
        getline(ss, ds[i].giangVien, ',');
        string sl;
        getline(ss, sl);
        ds[i].soLuong = stoi(sl);
    }
    for (int i = 0; i < 4; i++) {
        string queryLine;
        getline(cin, queryLine);
        if (queryLine.empty()) continue;
        stringstream ss(queryLine);
        string command;
        ss >> command;
        if (command == "FIND_ID") {
            string ma; ss >> ma;
            findByID(ds, ma);
        } 
        else if (command == "UPDATE_GIANGVIEN") {
            string ma, gvMoi;
            ss >> ma;
            getline(ss >> ws, gvMoi);
            if (updateGiangVien(ds, ma, gvMoi)) cout << "true" << endl;
            else cout << "false" << endl;
        } 
        else if (command == "UPDATE_SOLUONG") {
            string ma; int sl;
            ss >> ma >> sl;
            if (updateSoLuong(ds, ma, sl)) cout << "true" << endl;
            else cout << "false" << endl;
        } 
        else if (command == "FIND_TENKHOAHOC") {
            string ten;
            getline(ss >> ws, ten);
            findByTen(ds, ten);
        } 
        cout << "***" << endl;
    }
    return 0;
}
