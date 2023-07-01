#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0, cnt = 1;
        for(int i = 1; i < n; i++){
            if(str[i-1] == str[i]) cnt++;
            else{
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        cout << ans+1 << "\n";
    }
}
