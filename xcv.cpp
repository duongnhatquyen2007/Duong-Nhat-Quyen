#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Binary search returns index if target exists, or -1 if not found
int binarySearch(const vector<int>& A, int target) {
    int lo = 0, hi = A.size() - 1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    
    return -1; // Target not found
}

int main() {
    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> a(n);
        for (int m = 0; m < n; m++) {
            cin >> a[m];
        }

        int target;
        cin >> target; // Input the target number to search for

        // Binary search requires the array to be sorted
        sort(a.begin(), a.end());

        if (binarySearch(a, target) != -1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}