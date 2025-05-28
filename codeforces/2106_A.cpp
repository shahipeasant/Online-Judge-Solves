#include<bits/stdc++.h>

using namespace std;
int main()
{
    int _;
    cin >> _;
    while(_--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c0 = 0;
        int c1 = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }


        int ans = (n-1)*c1 + c0;

        cout << ans << endl;
    }

    return 0;
}
