#include <iostream>
using namespace std;
int main () {
    int c=0,n; cin>>n;
    for (int i=1; i<=n; i++)
        if (n%i==0)
            c++;
    cout<<c<<endl;
    for (int i=1; i<=n; i++)
        if (n%i==0)
            cout<<i<<" ";
    return 0;
}