#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Check if all elements are equal
        bool allEqual = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allEqual = false;
                break;
            }
        }

        if (allEqual) {
            cout << "NO\n";
            continue;
        }

        // Find a different element from the first one
        cout << "YES\n";
        vector<int> res(n, 2); // default all to 2
        res[0] = 1; // put first element in group 1

        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                res[i] = 2;
            } else {
                res[i] = 1;
            }
        }

        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
