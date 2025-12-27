#include <iostream>
using namespace std;
int main () {
    int n,c; cin >> n;
    c=0;
    if (n%2==0) {
        c++;
    }     
    if ((n<0) and (n%3==0)) {
        c++;
    }  
    if (c==1) {
        cout << "Yes";
    }
        
    else {
        cout << "No";
    }
    return 0;
}