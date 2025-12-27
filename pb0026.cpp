#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int s,hh,mm,ss; cin >> s;
    if s <= 86399 {
        hh=s/3600;
        mm=s/60;
        ss=s/1;
        cout << hh <<":"<< mm << ":" << ss;
    }
    else {
        cout << "Loi!";    
    }
return 0;    
}