#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> freq;
        set<int> unique_elements;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
            unique_elements.insert(v[i]);
        }

        if(unique_elements.size() == 1) {
            cout << "Yes" << endl;
        }
        else if(unique_elements.size() == 2) {
            auto it = unique_elements.begin();
            int a = *it;
            it++;
            int b = *it;

            int f1 = freq[a];
            int f2 = freq[b];

            if (abs(f1 - f2) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
