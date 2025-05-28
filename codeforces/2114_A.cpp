#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = stoi(s);
        int r = sqrt(a);
        if(r*r!=a){
            cout << -1 << endl;
        }
        else{
            cout << 0 << " " << r << endl;
        }
    }

    return 0;
}
